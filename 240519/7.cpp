// https://www.acwing.com/problem/content/809/

#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int sum = 0;
    if (a > b) swap(a, b);
    
    for (int i = a; i <= b; ++i)
    {
        sum += i;
    }
    
    return sum;
}

int main()
{
    int l, r;
    cin >> l >> r;
    
    cout << sum(l, r);
    
    return 0;
}