// https://www.acwing.com/problem/content/818/

#include <iostream>

using namespace std;

void reverse(int a[], int size)
{
    for (int i = 0, j = size - 1; i < j; ++i, --j)
    {
        swap(a[i], a[j]);
    }
}

int main()
{
    int n, size;
    cin >> n  >> size;
    
    int a[1005];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    reverse(a, size);
    
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}