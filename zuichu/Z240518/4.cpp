// https://www.acwing.com/problem/content/813/

#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int x, y;
    cin >> x >> y;

    swap(x, y);
    cout << x << " " << y <<endl;

    return 0;
}