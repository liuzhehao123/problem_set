//https://www.acwing.com/problem/content/755/

#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                int up = i, down = n - i + 1, left = j, right = n - j + 1;
                int res = min(min(up, down), min(left, right));
                cout << res << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}