// https://www.acwing.com/problem/content/824/

#include <iostream>

using namespace std;

int n, m, ans;

void fcnt(int x, int y)
{
    if (x == n && y == m) 
    {
        ans++;
    }
    else 
    {
        if (x < n) fcnt(x + 1, y);
        if (y < m) fcnt(x, y + 1);
    }
}

int main()
{
    cin >> n >> m;

    fcnt(0, 0);

    cout << ans << endl;    

    return 0;
}