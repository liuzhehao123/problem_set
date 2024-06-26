#include <bits/stdc++.h>

typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int h, m;
        std::cin >> h >> m;        
        std::cout << (60 - m) + (23 - h) * 60 << '\n';   
    }

    return 0;
}