// https://codeforces.com/contest/282/problem/A

#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;

    int x = 0;
    string str;
    for (int i = 0; i < n; ++i)
    {
        cin >> str;

        if (str[1] == '+') x++;
        else x--;
    }

    cout << x << endl;

    return 0;
}