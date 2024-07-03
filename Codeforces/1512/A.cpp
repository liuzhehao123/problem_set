#include <iostream>


void solve() {

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        int a[105];
        for (int i = 1; i <= n; ++i) {
            std::cin >> a[i];
        }
        if (a[1] != a[2] && a[1] != a[3]) {
            std::cout << 1 << '\n';
            continue;
        }
        for (int i = 2; i <= n; ++i) {
            if (a[i] != a[i - 1] && a[i] != a[i + 1]) {
                std::cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}