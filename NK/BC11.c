#include <stdio.h>

int main()
{
    int num = 0;
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    scanf("%d;%f,%f,%f", &num, &a, &b, &c);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", num, a, b, c);

    return 0;
}