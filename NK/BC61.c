#include <stdio.h>

int main() 
{
    int a;
    while (scanf("%d", &a) != -1)
    {
        int i = 0;
        for (i = 0; i < a; i++)
        {
            int j = 0;
            for (j = 0; j < a-i-1; j++)
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}