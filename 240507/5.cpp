// https://www.acwing.com/problem/content/756/

#include <iostream>

using namespace std;

int main()
{
    int n;
    
    while (n--)
    {
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << abs(i - j) + 1 << ' ';
            }
            cout << endl;
        }
        
        if (n != 0)  
            cout << endl;
    }
    return 0;
}