// https://www.acwing.com/problem/content/807/

// 方法一
/* #include <iostream>

using namespace std;

int max(int x, int y)
{
    if (x < y) swap(x, y); 
    return x;
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << max(a, b) << endl;

    return 0;
} */


// 方法二
#include <iostream>

using namespace std;

int max(int x, int y)
{
    if (x > y) return x;
    return y;
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << max(a, b) << endl;

    return 0;
}