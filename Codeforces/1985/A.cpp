// 耗时46ms
#include <bits/stdc++.h>

typedef long long ll;

std::string a, b;

void solve() {
    std::cin >> a >> b;
    std::swap(a[0], b[0]);
    std::cout << a << ' ' << b << '\n';
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

/* // 耗时31ms
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << ' ' << b << endl;
    }

    return 0;
} */