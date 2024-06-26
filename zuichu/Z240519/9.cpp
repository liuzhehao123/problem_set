// https://www.acwing.com/problem/content/816/

#include <iostream>

using namespace std;


void copy(int *a, int *b, int size)
{
    for (int i = 0; i < size; ++i)
    {
        b[i] = a[i];
    }
}

int main()
{
    int n, m, size;
    cin >> n >> m >> size;
    
    int a[105], b[105];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    
    copy(a, b, size);
    
    for (int i = 0; i < m; ++i)
    {
        cout << b[i] << ' ';
    }
    
    return 0;
}