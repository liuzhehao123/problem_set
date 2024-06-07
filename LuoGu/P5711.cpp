#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool exist = 0;
    if (n % 400 == 0 || (n % 100 != 0 && n % 4 == 0))
        exist = 1;
    
    cout << exist << endl;

    return 0;
} 