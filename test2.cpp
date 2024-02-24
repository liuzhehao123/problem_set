//FHQ-Treap
#include <cstdio>
#include <algorithm>
#define N 114514

using namespace std;

int seed, md = 19260817; //自定义的随机数生成器
void _srand(int x) { seed = x; } //初始化随机种子
int _rand()
{
    seed = ((seed * 7 % md) + 13) % md; //生成随机数的简单算法
    return seed;
}

int n, a[N], c[N]; //分别表示人数，每个人的任务重要性，以及他们良心的限制
int rt; //根节点的索引，用于操作Treap树

//结构体定义一个无旋Treap算法实现的平衡树用于处理队列
struct fhq_treap 
{
    int ch[N][2], rnd[N], siz[N], val[N], mx[N], tot; //定义Treap树的基本属性
    #define lc ch[x][0]
    #define rc ch[x][1]

    int pushup(int x) //更新节点信息
    {
        siz[x] = siz[lc] + siz[rc] + 1;
        mx[x] = max(mx[lc], max(val[x], mx[rc]));
        return x;
    }

    //分离Treap树，使之成为两个独立的子树
    void split(int p, int k, int &x, int &y) 
    {
        if (!p)
        {
            return void(x = y = 0);
        }
        if (k > siz[ch[p][0]])
        {
            split(ch[x = p][1], k - siz[ch[p][0]] - 1, ch[p][1], y);
        }
        else
        {
            split(ch[y = p][0], k, x, ch[p][0]);
        }
        pushup(p);
    }

    //合并函数，将两个Treap合并为一个
    int merge(int x, int y) 
    {
        if (!x || !y)
        {
            return x + y;
        }
        if (rnd[x] < rnd[y])
        {
            rc = merge(rc, y);
            return pushup(x);
        }
        else
        {
            ch[y][0] = merge(x, ch[y][0]);
            return pushup(y);
        }
    }

    //查询函数，用于在Treap中找出小于当前任务重要性的个数
    int query(int x, int pos) 
    {
        if (!x)
        {
            return 0;
        }
        if ((!lc) && (!rc))
        {
            return val[x] < a[pos];
        }
        if (mx[rc] >= a[pos] || val[x] >= a[pos])
        {
            return query(rc, pos);
        }
        else
        {
            return query(lc, pos) + 1 + siz[rc];
        }
    }

    //创建新节点
    int newnode(int v) 
    {
        int x = ++tot;
        val[x] = v, mx[x] = v, siz[x] = 1;
        rnd[x] = _rand();
        return x;
    }
    //中序遍历打印Treap树中的节点，确保了顺序
    void print(int x) 
    {
        if (lc)
        {
            print(lc);
        }
        printf("%d ", x);
        if (rc)
        {
            print(rc);
        }
    }
} t;

//主函数
int main()
{
    _srand(1966);
    scanf("%d", &n);
    //读入每个人的任务重要性a[i]和良心限制c[i]
    for (int i = 1; i <= n; i++) 
    {
        scanf("%d%d", &a[i], &c[i]);
        if (i - 1 <= c[i])
        {
            int x, y;
            t.split(rt, i - t.query(rt, i) - 1, x, y); //操作Treap数以模仿队伍中的位置交换
            rt = t.merge(x, t.merge(t.newnode(a[i]), y));
        }
        else
        {
            int x, y, z;
            //在操作Treap时要注意超过良心限制的人不会移动
            t.split(rt, i - c[i] - 1, x, y);
            t.split(y, c[i] - t.query(y, i), y, z);
            rt = t.merge(t.merge(x, y), t.merge(t.newnode(a[i]), z));
        }
    }
    t.print(rt); //打印最终队列的排序
    
    return 0;
}