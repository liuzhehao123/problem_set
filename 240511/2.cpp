// https://www.acwing.com/problem/content/763/

#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int cnt = 0;

    for (int i = 0; str[i]; ++i)
    {
        if (str[i] >= '0' && str[i] <= '9')
            cnt++;
    }

    cout << cnt << endl;
    
    return 0;
}