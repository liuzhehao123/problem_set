#include <bits/stdc++.h>

typedef long long ll;

int a[10];

void solve() {
    int n;
    std::cin >> n;
    int ans = 1;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    
    // 如果不知道sort函数可以这样写
    int min = 10, k = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < min) {
            min = a[i];
            k = i;
        }
    }
    a[k]++;

    for (int i  = 0; i < n; ++i) {
        ans *= a[i];
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }
    
    return 0;
}

// 用sort函数
/* #include <bits/stdc++.h>

typedef long long ll;

int a[10];

void solve() {
    int n;
    std::cin >> n;
    int ans = 1;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::sort(a, a + n); // 排序，a[0]最小
    a[0]++;
    for (int i  = 0; i < n; ++i) {
        ans *= a[i];
    }
    std::cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }
    
    return 0;
} */