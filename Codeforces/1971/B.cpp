#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int flag = 0;
        for (int i = 1; s[i]; ++i)
        {
            if (s[i] != s[0])
            {
                swap(s[i], s[0]);
                cout << "yes" << endl << s << endl;
                flag = 1;
                break; 
            }
        }

        if (flag == 0)
        {
            cout << "no" << endl;
        }
    }

    return 0;
}