#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;;
    while (t--)
    {
        cin >> s;
        if (s == "bca" || s == "cab")
            cout << "no" << endl;
        else 
            cout << "yes" << endl;
    }

    return 0;
}