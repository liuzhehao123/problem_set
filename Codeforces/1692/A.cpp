#include <bits/stdc++.h>

typedef long long ll;

void solve() {
    int a[4];
    std::cin >> a[0] >> a[1] >> a[2] >> a[3];

    int cnt = 0;
    for (int i = 1; i <= 3; ++i) {
        if (a[i] > a[0]) cnt++;
    }
    std::cout << cnt << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}