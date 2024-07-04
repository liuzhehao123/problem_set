#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    float s;
    std::cin >> s;
    float dist = 0;
    float d = 2;
    int cnt = 0;
    while (dist < s)
    {
        dist += d;
        d *= 0.98;
        cnt++;
    }
    std::cout << cnt << '\n';

    return 0;
}