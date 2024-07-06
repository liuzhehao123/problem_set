#include <iostream>

void solve() {
    int n;
    std::cin >> n;
    if (n == 3) std::cout << 3 << '\n';
    else std::cout << 2 << '\n';
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