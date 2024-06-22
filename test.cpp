#include <bits/stdc++.h>

using ll = long long;

void solve()
{
    int n;
    std::cin >> n;
    string s;
    std::cin >> s;
    
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            int satisfy = 2;
            for (int j = 0; j < i; j++)
            {
                for (int k = j + i; k < n; k += i)
                {
                    if (s[k] != s[j]) satisfy--;
                }
            }

            if (satisfy > 0)
            {
                std::cout << i << '\n';
                return;
            }

            satisfy = 2;
            for (int j = n - i; j < n; j++)
            {
                for (int k = j - i; k >= 0; k -= i)
                {
                    if (s[k] != s[j]) satisfy--;
                }
            }

            if (satisfy > 0)
            {
                std::cout << i << '\n';
                return;
            }
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin >> t;

    while (t--) solve();

    return 0;
}