// https://codeforces.com/contest/158/problem/A

#include <iostream>

using namespace std;

int a[51];

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] >= a[k] && a[i] > 0) ans++;
    }

    cout << ans << endl;

    return 0;
}