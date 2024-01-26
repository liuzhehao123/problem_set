#include <stdio.h>

int main() 
{
    float score1, score2, score3;
    scanf("%f%f%f", &score1, &score2, &score3);
    float scores = score1 + score2 + score3;
    float ave = (score1 + score2 + score3) / 3.0;
    printf("%.2f %.2f\n", scores, ave);
    return 0;
}