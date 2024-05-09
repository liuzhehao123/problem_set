#include <iostream>

using namespace std;

int main()
{
    char a1[] = {'C', '+', '+'};            // 列表初始化，没有空字符
    char a2[] = {'C', '+', '+', '\0'};      // 列表初始化，含有显示的空字符
    char a3[] = "C++";                      // 自动添加表示字符串结尾的空字符

    cout << sizeof a1 << ' ' << sizeof a2 << ' ' << sizeof a3 << endl;
    // a2等价于a3
    
    return 0;
}