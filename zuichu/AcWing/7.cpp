// https://www.acwing.com/problem/content/825/

#include <iostream>

using namespace std;

int n;

void dfs(int u, int num[], bool st[])
{
    if (u > n)
    {
        for (int i = 1; i <= n; ++i)
        {
            cout << num[i] << ' ';
        }
        cout << endl;
    }
    else 
    {
        for (int i = 1; i <= n; ++i)
        {
            if (!st[i])
            {
                st[i] = true;
                num[u] = i;
                dfs(u + 1, num, st);
                st[i] = false;
            }
        }
    }
}

int main()
{
    cin >> n;

    int num[10];
    bool st[10] = {0};

    dfs(1, num, st);

    return 0;
}