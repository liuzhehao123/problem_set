#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    int a[1005];
    for (int i = 0; i < n; ++i) std::cin >> a[i];

    int min = a[0];
    for (int i = 0; i < n; ++i) {
        if (a[i] < min) min = a[i];
    }

    std::cout << min << '\n';

    return 0;
}