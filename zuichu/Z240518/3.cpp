// https://www.acwing.com/problem/content/810/

// 枚举
/* #include <iostream>

using namespace std;

int gcd(int x, int y)
{
    for (int i = 1000; i; --i)
    {
        if (x % i == 0 && y % i == 0)
        return i;
    }

    return -1;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
} */


// 辗转相除法
#include <iostream>

using namespace std;

int gcd(int x, int y)
{
    int tmp;
    while (y != 0)
    {
        tmp = x % y;
        x = y;
        y = tmp;
    }

    return x;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}