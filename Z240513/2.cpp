// https://www.acwing.com/problem/content/777/

// 1
/* 
#include <iostream>

using namespace std;

int main()
{
    string a, b;
    while (cin >> a)
    {
        b = a + ' ' + b;
    }

    cout << b << endl;

    return 0;
} 
*/


// 2
#include <iostream>

using namespace std;

int main()
{
    string str[100];
    int n = 0;
    while (cin >> str[n])
    {
        n++;
    }

    for (int i = n - 1; i >= 0; --i)
    {
        cout << str[i] << ' ';
    }

    return 0;
}
