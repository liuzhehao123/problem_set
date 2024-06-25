#include <bits/stdc++.h>

typedef long long ll;
// using long long = ll;

void solve() {
    std::string s, str = "codeforces";
    std::cin >> s;

    int cnt = 0;
    for (int i= 0; s[i]; ++i) {
        if (s[i] != str[i]) cnt++;
    }
    std::cout << cnt << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}