// https://www.acwing.com/problem/content/823/

// 方法一
/* #include <iostream>

using namespace std;

int solve(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;
    return solve(n - 1) + solve(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << solve(n) << endl;

    return 0;
} */


// 方法二
#include <iostream>

using namespace std;

int n;
int ans;

void f(int k)
{
    if (k == n) ans++;
    else if (k < n)
    {
        f(k + 1);
        f(k + 2);
    }
}

int main()
{
    cin >> n;

    f(0);

    cout << ans << endl;

    return 0;
}