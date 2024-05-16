// https://www.luogu.com.cn/problem/P5718

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[1005];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int min = a[0];
    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= min) min = a[i];
    }
    
    cout << min << endl;

    return 0;
}