#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::cin >> n;

    int num = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = i; j < n; ++j) {
            num++;
            if (num < 10) {
                std::cout << 0;
            }
            std::cout << num;
        }
        std::cout << '\n';
    }

    return 0;
}