#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    a %= 100;
    b %= 100;
    int c = a + b;

    if (c >= 100)
    {
        c %= 100;
    }
    printf("%d\n", c);
    return 0;
}