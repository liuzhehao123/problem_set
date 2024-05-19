// https://www.acwing.com/problem/content/814/

#include <iostream>

using namespace std;

const int N = 1000;

void print(int *a, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n, size;
    cin >> n >> size;

    int a[N];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    print(a, size);

    return 0;
}