// https://acm.hdu.edu.cn/showproblem.php?pid=2033

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ah, am, as, bh, bm, bs;
    while (n--)
    {
        cin >> ah >> am >> as >> bh >> bm >> bs;

        ah += bh;
        am += bm;
        as += bs;

        am += as / 60;
        as %= 60;
        ah += am / 60;
        am %= 60;

        cout << ah << " " << am << " " << as << endl;
    }

    return 0;
}