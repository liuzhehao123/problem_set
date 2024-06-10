#include <iostream>

using namespace std;

int n, pen1, pen2, pen3, cnt1, cnt2, cnt3, price1, price2, price3, ans[3];

int main()
{
    cin >> n >> cnt1 >> price1 >> cnt2 >> price2 >> cnt3 >> price3;

    while (pen1 < n)
    {
        pen1 += cnt1;
        ans[0] += price1;
    }

    while (pen2 < n)
    {
        pen2 += cnt2;
        ans[1] += price2;
    }

    while (pen3 < n)
    {
        pen3 += cnt3;
        ans[2] += price3;
    }
/*  
    if (ans[0] > ans[1]) swap(ans[0], ans[1]); 
    if (ans[1] > ans[2]) swap(ans[1], ans[2]); 
    if (ans[0] > ans[1]) swap(ans[0], ans[1]); 
*/

    if (ans[2] < ans[1]) swap(ans[2], ans[1]);
    if (ans[1] < ans[0]) swap(ans[1], ans[0]);

    cout << ans[0] << endl;

    return 0;
}