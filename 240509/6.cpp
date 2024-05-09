#include <iostream>

using namespace std;

int main()
{
    char str[100];

    fgets(str, 100, stdin);  
    // gets函数在新版C++中被移除了，因为不安全。
    // 可以用fgets代替，但fgets不会删除行末的回车字符

    cout << str << endl;

    return 0;
}