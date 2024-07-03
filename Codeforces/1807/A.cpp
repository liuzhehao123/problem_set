#include <iostream>

void solve() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a + b == c) std::cout << '+' << '\n';
    if (a - b == c) std::cout << '-' << '\n';
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