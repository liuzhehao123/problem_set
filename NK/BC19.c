#include <stdio.h>

int main() {
    int x = 0;
    scanf("%d", &x);
    int a = x % 10;
    int b = x / 10 % 10;
    int c = x / 100 % 10;
    int d = x / 1000;
    printf("%d%d%d%d\n", a, b, c, d);
    return 0;
}