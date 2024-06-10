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
        int cntA = 0, cntB = 0;
        for (int i = 0; s[i]; ++i)
        {
            if (s[i] == 'A')
                cntA++;
            else    
                cntB++;
        }

        if (cntA > cntB) 
            cout << 'A' << endl;
        else    
            cout << 'B' << endl;
    }
    
    return 0;
}