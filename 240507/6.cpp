// https://www.acwing.com/problem/content/757/

#include <iostream>

using namespace std;

int main()
{
    int n;
    
    while (cin >> n)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int res = 1;
                for (int k = 0; k < i + j; ++k)
                {
                    res *= 2;
                }
                cout << res << ' ';
            }
            cout << endl;
        }
        if (n != 0)
            cout << endl;
    }
    return 0;
}