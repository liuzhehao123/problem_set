#include <bits/stdc++.h>

typedef long long ll;

void solve() {
    int n;
    std::cin >> n;

    short a[100], cnt = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if (a[i] == 0) {
            cnt++;
        } else {
            if (ans < cnt) ans = cnt;
            cnt = 0;
        }
    }
    if (ans < cnt) ans = cnt;
    std::cout << ans << '\n';
}

int main() {
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