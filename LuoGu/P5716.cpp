#include <iostream>

using namespace std;

int main()
{
    int y, m;
    cin >> y >> m;
    
    int d[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        d[1] = 29;
    
    cout << d[m - 1] << endl;

    return 0;
}