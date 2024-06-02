/* #include <cstdio>

int main()
{
    char a, b, c, d;
    scanf("%c%c%c.%c", &a, &b, &c, &d);
    printf("%c.%c%c%c", d, c, b, a);    

    return 0;
} */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}