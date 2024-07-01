#include <bits/stdc++.h>

std::string s = "codeforces";

void solve() {
    char c;
    std::cin >> c;
    for (char i : s) {
        if (i == c) {
            std::cout << "YES" << '\n';
            return;
        }
    }
    std::cout << "NO" << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
    }

    return 0;
}