// https://www.acwing.com/problem/content/812/

#include <iostream>

using namespace std;
int abs(int x)
{
    if (x >= 0) return x;
    return 0 - x;
}

int main()
{
    int x;
    cin >> x;
    
    cout << abs(x) << endl;
    
    return 0;
}