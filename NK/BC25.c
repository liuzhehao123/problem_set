#include <stdio.h>
#include <math.h>

int main() {
    int weight, height_cm;
    scanf("%d %d", &weight, &height_cm);
    float height_m = height_cm / 100.0;
    float bmi = weight / pow(height_m,2);
    printf("%.2f\n", bmi);
    return 0;
}