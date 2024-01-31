#include <stdio.h>
#include <math.h>

int main() 
{
    unsigned int weight, height_cm;
    while (~scanf("%u %u", &weight, &height_cm))
    {
        float height = height_cm / 100.0;
        float bmi = weight / pow(height,2);
        if (bmi < 18.5)  printf("Underweight\n");
        else if (bmi >= 18.5 && bmi <= 23.9)  printf("Normal\n");
        else if (bmi > 23.9 && bmi <=27.9)  printf("Overweight\n");
        else printf("Obese\n");
    }
    return 0;
}