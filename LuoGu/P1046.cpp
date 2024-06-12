#include <iostream>

using i64 = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int h[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> h[i];
    }

    int max_h;
    std::cin >> max_h;
    max_h += 30;

    int cnt = 0;
    for (int i = 0; i < 10; ++i) {
        if (h[i] <= max_h) {
            cnt++;
        }
    }

    std::cout << cnt << '\n';

    return 0;
}