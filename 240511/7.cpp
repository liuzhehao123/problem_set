// https://www.acwing.com/problem/content/770/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char s1[105], s2[105];

    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);

    if (s1[strlen (s1) - 1] == '\n') s1[strlen (s1) - 1] = 0;
    if (s2[strlen (s2) - 1] == '\n') s2[strlen (s2) - 1] = 0;

    for (int i = 0; s1[i]; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
    }
    for (int i = 0; s2[i]; i++)
    {
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
    }

    int t = strcmp(s1, s2);
    if (t == 0) cout << '=';
    else if (t > 0) cout << '>';
    else cout << '<';

    return 0;
}