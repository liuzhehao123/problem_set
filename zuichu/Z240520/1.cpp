// https://www.acwing.com/problem/content/817/

// 字符串
/* #include <iostream>

using namespace std;

void print(string str)
{
    for (int i = 0; str[i]; ++i)
    {
        cout << str[i];
    }
}

int main()
{
    string str;
    getline(cin, str);
    
    print(str);
    
    return 0;
} */


// 字符数组
#include <iostream>

using namespace std;

void print(char str[])
{
    for (int i = 0; str[i]; ++i)
    {
        cout << str[i];
    }
}

int main()
{
    char str[101]; // 这里需要多开一个
    cin.getline(str, 101);
    
    print(str);
    
    return 0;
}