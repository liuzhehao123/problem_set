// https://www.acwing.com/problem/content/778/

#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a.size() < b.size()) swap(a, b);

    for (int i = 0; i < a.size(); ++i)
    {
        a = a.substr(1) + a[0];

        for (int j = 0; j + b.size() <= a.size(); ++j)
        {
            int k = 0;
            while (k < b.size())
            {
                if (a[j+k] != b[k]) break;
                k++;
            }

            if (k == b.size()) 
            {
                puts("true");
                return 0;
            }
        }
    }

    puts("false");

    return 0;
}