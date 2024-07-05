/* #include <bits/stdc++.h>

void solve() {
    std::string s;
    std::cin >> s;
    if (s[0] != 'Y' && s[0] != 'y') std::cout << "NO" << '\n';
    else if (s[1] != 'E' && s[1] != 'e') std::cout << "NO" << '\n';
    else if (s[2] != 'S' && s[2] != 's') std::cout << "NO" << '\n';
    else std::cout << "YES" << '\n';
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
} */

#include <bits/stdc++.h>

void solve() {
    std::string s;
    std::cin >> s;
    if (s == "YES" || s == "Yes" || s == "YeS" || s == "YEs" || s == "yES" || s == "yeS" || s == "yEs" || s == "yes")
        std::cout << "YES" << '\n';
    else 
        std::cout << "NO" << '\n'; 
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