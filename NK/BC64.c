#include <stdio.h>
int main() 
{
    int n = 0;
    while (scanf("%d", &n) != EOF) 
    {
        //上一半
        int i = 0;
       for (i = n + 1; i > 0; i--) 
       {
            int j = 0;
            for (j = i; j > 0; j--) 
            {
                printf("* ");
            }
            printf("\n");
        }
        //下一半
        for (i = 1; i <= n; i++) 
        {
            int j = 0;
            for (j = 0; j <= i; j++) 
            {
                 printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
} 

