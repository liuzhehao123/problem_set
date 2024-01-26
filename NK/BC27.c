#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main() 
{
    float r = 0;
    scanf("%f", &r);
    double v = 4.0 / 3.0 * PI * pow(r,3);
    printf("%.3lf", v);
    return 0;
}