#include <stdio.h>

int main() 
{
    double a1, a2;
    char ch;
    scanf("%lf%c%lf", &a1, &ch, &a2);
    switch (ch) 
    {
        case '+':
        printf("%.4lf+%.4lf=%.4lf\n",a1, a2, a1+a2);
        break;
        case '-':
        printf("%.4lf-%.4lf=%.4lf\n", a1, a2, a1-a2);
        break;
        case '*':
        printf("%.4lf*%.4lf=%.4lf\n", a1, a2, a1*a2);        
        break;
        case '/':
        if (a2 == 0.0) printf("Wrong!Division by zero!\n");
        else printf("%.4lf/%.4lf=%.4lf\n", a1, a2, a1/a2);
        break;

        default:
        printf("Invalid operation!\n");
        break;

    }

    return 0;
}