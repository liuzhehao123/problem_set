// https://www.acwing.com/problem/content/779/

#include <iostream>

using namespace std;

int main()
{
    string str;
    while (cin >> str, str != ".")
    {
        int len = str.size();
        for (int n = len; n; --n)
        {
            if (len % n == 0)
            {
                int m = len / n;
                string s = str.substr(0, m);
                
                string str1;
                for (int i = 0; i < n; ++i)
                {
                    str1 += s;
                }
                
                if (str1 == str)
                {
                    cout << n << endl;
                    break;
                }
            }
        }
    }
    
    return 0;
}