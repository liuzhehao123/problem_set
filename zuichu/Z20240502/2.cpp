//https://www.acwing.com/problem/content/740/

#include <cstdio>

using namespace std;

int main()
{
    int v;
    scanf("%d", &v);
    
    int n[10];
    n[0] = v;
    
    for (int i = 1; i < 10; ++i)
    {
        n[i] = n[i-1] * 2;
    }
    
    for (int i = 0; i < 10; ++i)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }
    
    return 0;
}