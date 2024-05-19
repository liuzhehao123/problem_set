// https://www.acwing.com/problem/content/811/

#include <iostream>

using namespace std;

int lcm(int a, int b)
{
    if (a > b) swap(a, b);
    
    for (int i = a; i <= a * b; ++i)
    {
        if (i % a == 0 && i % b == 0)
            return i;
    }
    return -1;
}

int main()
{
    int a, b;
    cin >> a >> b;
    
    cout << lcm(a, b) << endl;
    
    return 0;
}