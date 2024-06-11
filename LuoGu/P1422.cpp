#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    float ans;
    if (n <= 150) 
        ans = 0.4463 * n;
    else if (n > 150 && n <= 400)
        ans = 0.4463 * 150 + 0.4663 * (n - 150);
    else if (n > 400)
        ans = 0.4463 * 150 + 0.4663 * 250 + 0.5663 * (n - 400);    

    printf("%.1f\n", ans);

    return 0;
}