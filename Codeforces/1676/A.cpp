#include <iostream>

void solve() {
    char c[6];
    for (int i = 0; i < 6; ++i) {
        std::cin >> c[i];
    }
    if (c[0] + c[1] + c[2] == c[3] + c[4] + c[5]) std::cout << "YES" << '\n';
    else std::cout << "NO" << '\n';
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