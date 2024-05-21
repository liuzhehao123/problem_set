// https://www.acwing.com/problem/content/769/

#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    for (auto &encrypt:str)
    {
        if (encrypt >= 'a' && encrypt <= 'z')
            encrypt = (encrypt - 'a' + 1) % 26 + 'a';
        else if (encrypt >= 'A' && encrypt <= 'Z')
            encrypt = (encrypt - 'A' + 1) % 26 + 'A';
    }
    
    cout << str << endl;
    
    return 0;
}