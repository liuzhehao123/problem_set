#include <stdio.h>

int main() 
{
    float a = 0;
    scanf("%f", &a);
    int x = (int)a % 10;
    printf("%d\n", x);
    return 0;
}