#include <stdio.h>

int main() 
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    float average = (a+b+c+d+e) / 5.0;
    printf("%.1f\n", average);
    return 0;
}