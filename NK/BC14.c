/*#include <stdio.h>

int main() {
    int year, month, day;
    scanf("%4d%2d%2d", &year, &month, &day);
    printf("year=%d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d\n", day);
    return 0;
}*/

#include <stdio.h>

int main() 
{
    int date = 0, year = 0, month = 0, day = 0;
    scanf("%d", &date);
    day = date % 100;
    month = (date / 100)% 100;
    year = date / 10000;
    printf("year=%d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d\n", day);
    return 0;
}