#include <iostream>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);

    int a = 0, b = 0;
    int cnt_a = 0, cnt_b = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % k == 0) {
            a += i;
            cnt_a++;
        } else {
            b += i;
            cnt_b++;
        }
    }

    printf("%.1f %.1f\n", a * 1.0 / cnt_a, b * 1.0 / cnt_b);
    
    return 0;
}