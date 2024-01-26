#include <stdio.h>

int main() 
{
    int seconds;
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = seconds % 3600 / 60;
    int second = seconds % 3600 % 60;
    printf("%d %d %d\n", hours, minutes, second);
    return 0;
}