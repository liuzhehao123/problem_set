// https://www.acwing.com/problem/content/729/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = n / 2;
    int y = n / 2;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (abs(i - x) + abs(j - y) <= n / 2) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}