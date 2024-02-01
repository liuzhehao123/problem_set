#include <stdio.h>

int main() 
{
   unsigned int a;
    while (~scanf("%d", &a))
    {
       while (a > 0)
       {
        printf("*");
        a--;
       }
       printf("\n");
    }
    return 0;
}