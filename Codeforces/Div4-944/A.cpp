#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        if (a < b) 
        {
            cout << a << ' ' << b << endl;
        }
        else
        {
            cout << b << ' ' << a << endl;
        }
    }
    
    return 0;
}