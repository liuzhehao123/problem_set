// https://acm.hdu.edu.cn/showproblem.php?pid=2075

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b;
    while (t--)
    {
        cin >> a >> b;

        if (a % b == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}