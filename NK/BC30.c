#include <stdio.h>

int main() 
{
    int n, h, m;
    scanf("%d %d %d", &n, &h, &m);
    int result = (n * h - m) / h;
    printf("%d\n", result);
    return 0;
}