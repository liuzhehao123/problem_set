// https://www.acwing.com/problem/content/819/

#include <iostream>

using namespace std;

int unique(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        bool is_same = false;
        for (int j = 0; j < i; ++j)
        {
            if (a[i] == a[j]) 
            {
                is_same = true;
                break;
            }
        }
        
        if (!is_same)
        {
            cnt++;
        }
    }
    
    return cnt;
}

int main()
{
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    
    cout << unique(a, n) << endl;
    
    return 0;
}