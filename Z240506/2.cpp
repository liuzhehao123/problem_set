//https://www.acwing.com/problem/content/743/

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long f[61];
    f[0] = 0, f[1] = 1;
    for (int i = 2; i < 61; ++i)
    {
        f[i] = f[i-1] + f[i-2]; 
    }
    
    int n;
    cin >> n;
    
    while (n--)
    {
        int x;
        cin >> x;
        printf("Fib(%d) = %lld\n", x, f[x]);
    }
    
    return 0;
}