/* #include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int a;
    std::cin >> a;

    int cnt = 1;
    while (a > 1) {
        a /= 2;
        cnt++;
    }

    std::cout << cnt << '\n';

    return 0;
} */

#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int a;
    std::cin >> a;

    int cnt = 1;
    for (int i = a; i > 1; i /= 2) {
        cnt++;
    }

    std::cout << cnt << '\n';

    return 0;
}