#include <stdio.h>

int main() 
{
    int year = 0, month = 0;
    while(~scanf("%d %d", &year, &month))
    {
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            printf("30\n");
        }
        else if (month == 2)
        {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            {
                printf("29\n");
            }
            else printf("28\n");
        }
        else printf("31\n");
    }
    return 0;
}