#include <iostream>

void solve() {
    int n, a, b;
    std::cin >> n >> a >> b;

    int ans = n * a;
    if (b < 2 * a) ans = (n / 2) * b + (n % 2) * a;
    std::cout << ans << '\n';
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