#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float cir = a + b + c;
    float p = cir / 2.0;
    float area = sqrt(p*(p-a)*(p-b)*(p-c)); //海伦公式
    printf("circumference=%.2f area=%.2f\n", cir, area);
    return 0;
}