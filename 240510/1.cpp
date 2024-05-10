// https://www.acwing.com/problem/content/774/

#include <iostream>
#include <cstring>

using namespace std;

int cnt[30];
char str[100000];

int main()
{
    cin >> str;
    int len = strlen(str); // 2.不需要求字符串长度

    for (int i = 0; i < len; ++i) // 1. for (int i = 0; str[i]; ++i) 快一点，少求字符串长度
    {
        cnt[str[i] - 'a']++;
    }

    for (int i = 0; i < len; ++i)
    {
        if (cnt[str[i] - 'a'] == 1)
        {
            cout << str[i] << endl;
            return 0;
        }
    }

    puts("no");

    return 0;
}