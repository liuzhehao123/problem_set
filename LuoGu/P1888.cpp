#include <iostream>

using namespace std;

int min(int a, int b, int c) {
    int d = a < b ? a : b;
    return d < c ? d : c;
}

int max(int a, int b, int c) {
    int e = a > b ? a : b;
    return e > c ? e : c;
}

int gcd(int x, int y) {
    int t = x % y;
    while (t)
    {
        x = y;
        y = t;
        t = x % y;
    }
    return y;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int mi = min(a, b, c);
    int ma = max(a, b, c);

    cout << mi / gcd(mi, ma) << '/' << ma / gcd(mi, ma) << endl;

    return 0;
}