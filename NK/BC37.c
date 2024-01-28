#include <stdio.h>

int main() 
{
    float price1, price2;
    int month, day, flag;
    scanf("%f %d %d %d", &price1, &month, &day, &flag);

    if (month == 11 & day == 11)
    {
        if (flag == 1)
        price2 = price1*0.7-50;
        else price2 = price1*0.7;
    }
    
    if (month == 12 && day == 12)
    {
        if (flag == 1)
        price2 = price1*0.8-50;
        else price2 = price1*0.8;
    }
    
    if (price2 < 0)
    price2 = 0;
    
    printf("%.2f\n", price2);

    return 0;
}