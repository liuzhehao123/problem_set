#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int quotien = a / b;
    int remainder = a % b;
    printf("%d %d\n", quotien, remainder);
    return 0;
}