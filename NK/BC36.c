#include <stdio.h>
#include <math.h>

int main() 
{
    float weight, height;
    scanf("%f %f", &weight, &height);
    float bmi = weight / pow(height,2);

    if (bmi > 18.5 && bmi < 23.9)
    printf("Normal\n");
    else printf("Abnormal\n");

    return 0;
}