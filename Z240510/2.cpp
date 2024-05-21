// https://www.acwing.com/problem/content/771/

#include <iostream>

using namespace std;

int main()
{
    char str[35];
    char replace;
    cin >> str >> replace;
    
    for (int i = 0; str[i]; ++i)
    {
        if (str[i] == replace)
            str[i] = '#';
    }
    
    cout << str << endl; // puts(str); 要包含cstring头文件
    
    return 0;
}