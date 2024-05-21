// https://codeforces.com/contest/71/problem/A

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;

        if (str.size() > 10)
        {
            char first = str[0];
            int len = str.size() - 2;
            char last = str[str.size() - 1];
            cout << first << len << last << endl;
        }
        else
        {
            cout << str << endl;
        }
    }

    return 0;
}