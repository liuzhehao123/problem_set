// https://www.acwing.com/problem/content/806/

// 非递归做法
/* #include <iostream>

using namespace std;

int fact(int n)
{
    int res = 1;
    for (int i = 1; i <= n; ++i)
    {
        res *= i;
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    cout << fact(n) << endl;

    return 0;
} */


// 递归做法
#include <iostream>

using namespace std;

int fact(int n)
{
    if (n == 1) return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << fact(n) << endl;

    return 0;
}