#include <iostream>

using namespace std;

int a[100], b[100];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0, max = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i] >> b[i];

            if (a[i] <= 10 && b[i] > max)
            {
                ans = i;
                max = b[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}