#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Node {
    int key; // ai值，代表任务的重要性
    int height; // AVL树的高度
    int count; // 保存该节点及其左子树包含的节点总数
    Node* left;
    Node* right;
    Node(int k) : key(k), height(1), count(1), left(nullptr), right(nullptr) {}
};

// 工具函数，获取节点的高度
int height(Node* N) {
    if (N == nullptr)
        return 0;
    return N->height;
}

// 工具函数，获取节点的count
int getCount(Node* N) {
    if (N == nullptr)
        return 0;
    return N->count;
}

// 用于更新节点N的高度和count
void updateNode(Node* N) {
    N->height = max(height(N->left), height(N->right)) + 1;
    N->count = getCount(N->left) + getCount(N->right) + 1;
}

// 右旋转
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // 旋转
    x->right = y;
    y->left = T2;

    // 更新高度和count
    updateNode(y);
    updateNode(x);

    return x;
}

// 左旋转
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // 旋转
    y->left = x;
    x->right = T2;

    // 更新高度和count
    updateNode(x);
    updateNode(y);

    return y;
}

// 获取平衡因子
int getBalance(Node* N) {
    if (N == nullptr)
        return 0;
    return height(N->left) - height(N->right);
}

// 将key插入到AVL树中，并返回新树的根
Node* insert(Node* node, int key, int* order, int position) {
    if (node == nullptr) {
        order[position] = key;
        return new Node(key);
    }

    if (key < node->key)
        node->left = insert(node->left, key, order, position);
    else {
        node->right = insert(node->right, key, order, position + getCount(node->left) + 1);
    }

    updateNode(node);

    int balance = getBalance(node);

    // 左左情况
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    // 右右情况
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    // 左右情况
    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // 右左情况
    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// 删除给定树的所有节点
void deleteTree(Node* node) {
    if (node == nullptr)
        return;

    deleteTree(node->left);
    deleteTree(node->right);
    delete node;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> people(n);
    vector<int> order(n);
    Node* root = nullptr;

    for (int i = 0; i < n; ++i) {
        cin >> people[i].first >> people[i].second;
    }
  
    // 根据重要性ai进行排序
    sort(people.begin(), people.end());

    for (int i = 0; i < n; ++i) {
        // 在AVL树中插入，并更新队列中的排序
        root = insert(root, i + 1, order.data(), people[i].second);
    }

    for (int i : order) {
        cout << i << " ";
    }
    cout << endl;

    deleteTree(root); // 清理内存
    return 0;
}