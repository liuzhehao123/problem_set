#include<algorithm>
#include<cstdio>
#define N 100010

using namespace std;

int a[N], c[N], n;
int val[N], siz[N], maxn[N], fa[N], ch[N][2], len, root;

int read() 
{
    static int res;
    static char op;
    do op = getchar();
    while (op > '9' || op < '0');
    for (res = 0; op >= '0' && op <= '9'; op = getchar())
    {
        res = res * 10 + (op ^ 48);
    }
    return res;
}

bool relation(int x) 
{
    return ch[fa[x]][1] == x;
}

void update(int x) 
{
    siz[x] = siz[ch[x][0]] + siz[ch[x][1]] + 1;
    int p = a[val[x]], ch1 = a[maxn[ch[x][0]]], ch2 = a[maxn[ch[x][1]]];
    if (p > ch1 && p > ch2) 
    {
        maxn[x] = val[x];
    }
    else if (ch1 > ch2)
    {
        maxn[x] = maxn[ch[x][0]];
    }
    else maxn[x] = maxn[ch[x][1]];
}

void rotate(int x) 
{
    int f = fa[x], ff = fa[f], k = relation(x), y = ch[x][!k];
    fa[f] = x;
    fa[x] = ff;
    fa[y] = f;
    ch[x][!k] = f;
    ch[f][k] = y;
    ch[ff][ch[ff][1] == f] = x;
    update(f);
    update(x);
}

void _splay(int x, int p) 
{
    for (int f; fa[x] != p; rotate(x))
    {
        if (fa[f = fa[x]] != p)
        {
            rotate(relation(x)^relation(f) ? x : f);
        }
    }
    if (!p)
    {
        root = x;
    }
}

int _find(int rank) 
{
    int now = root;
    while (siz[ch[now][0]] + 1 != rank) 
    {
        if (siz[ch[now][0]] >= rank)
        {
            now = ch[now][0];
        }
        else rank -= siz[ch[now][0]] + 1, now = ch[now][1];
    }
    return now;
}

void ins(int& x, int f, int v) 
{
    if (!x) 
    {
        x = ++len;
        fa[x] = f;
        maxn[x] = val[x] = v;
        siz[x] = 1;
        return;
    }
    if (a[v] > a[maxn[ch[x][1]]] && a[v] > a[val[x]])
    {
        ins(ch[x][0], x, v);
    }
    else ins(ch[x][1], x, v);
    update(x);
}

void print(int x) 
{
    if (ch[x][0])
    {
        print(ch[x][0]);
    }
    printf("%d ", val[x]);
    if (ch[x][1])
    {
        print(ch[x][1]);
    }
}

signed main(int argc, char** argv) 
{
    n = read();
    for (int i = 1; i <= n; ++i)
    {
        a[i] = read(), c[i] = read();
    }
    for (int i = 1; i <= n; ++i) 
    {
        if (i - c[i] > 1) 
        {
            _splay(_find(i - c[i] - 1), 0);
            ins(ch[root][1], root, i);
        } 
        else ins(root, 0, i);
        _splay(len, 0);
    }
    print(root);
    return 0;
}