// https://www.acwing.com/problem/content/762/

// 方法一
/* #include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int cnt = 0;
    
    for (int i = 0; str[i]; ++i)
    {
        cnt++;
    }
    
    cout << cnt << endl;
    
    return 0;
} */


// 方法二
/* #include <iostream>

using namespace std;

int main()
{
    char str[105];
    fgets(str, 105, stdin);
    
    int cnt = 0;
    for (int i = 0; str[i] && str[i] != '\n'; ++i)
    {
        cnt++;
    }

    cout << cnt << endl;

    return 0;
} */

// 方法三
#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    cout << str.size() << endl;
    
    return 0;
}