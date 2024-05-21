// https://www.acwing.com/problem/content/767/

#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    string res;
    for (auto c : str)
    {
        res = res + c + ' ';
    }
    
    cout << res << endl;
    
    return 0;
}