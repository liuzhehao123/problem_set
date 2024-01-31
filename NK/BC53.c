#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c;
    while (~scanf("%f %f %f", &a, &b, &c))
    {
        if (a == 0)
        {
            printf("Not quadratic equation\n");
        }
        else 
        {
            int deta = b*b-4*a*c;
            if (deta == 0)
            {
                printf("x1=x2=%.2f\n", -b/(2*a)+0);
            } 
            else if (deta > 0)
            {
                printf("x1=%.2f;x2=%.2f\n", (-b-sqrt(deta))/(2*a), (-b+sqrt(deta))/(2*a));
            }
            else if (deta < 0)
            {
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b/(2*a), sqrt(-deta)/(2*a), -b/(2*a), sqrt(-deta)/(2*a));

            }
        }
    }
    return 0;
}