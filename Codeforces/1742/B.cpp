#include <bits/stdc++.h>

typedef long long ll;

int a[100];
int n;

void solve() {
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::sort(a, a + n);
    bool flag = true;
    for (int i = 0; i < n- 1 ; ++i) {
        if (a[i] == a[i + 1]) {
            std::cout << "NO" << '\n';
            flag = false;
            break;
        }
    }
    if (flag) std::cout << "YES" << '\n';
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