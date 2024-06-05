#include <iostream>

using namespace std;

void solve()
{
    int x;
    cin >> x;
    
    bool flag1 = false, flag2 = false;
    if (x % 2 == 0) flag1 = true;
    if (x > 4 && x <= 12) flag2 = true;

    cout << (flag1 && flag2) << ' ';
    cout << (flag1 || flag2) << ' ';
    cout << (flag1 ^ flag2) << ' ';
    cout << (!flag1 && !flag2) << ' ';
    
    cout << endl;
}

int main()
{
    solve();

    return 0;
}