#include <iostream>

using namespace std;

void solve()
{
    int a, b, c, d, cnt = 0;
    cin >> a >> b >> c >> d;

    if (a > b)
        swap(a, b);

    if (c >= a && c <= b)
        cnt++;
    if (d >= a && d <= b)
        cnt++;
    
    if (cnt % 2 != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    
    return 0;
}