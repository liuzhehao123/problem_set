#include <iostream>
#include <algorithm>

using i64 = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int a[3];
    for (int i = 0; i < 3; ++i) {
        std::cin >> a[i];
    }

    std::sort(a, a + 3);
    
    char b[3];
    for (int i = 0; i < 3; ++i) {
        std::cin >> b[i];
    } 

    for (int i = 0; i < 3; ++i) {
        std::cout << a[b[i] - 'A'] << ' ';
    }

    std::cout << '\n';

    return 0;
}