#include <stdio.h>

int main() 
{
    int a = 0;
    while (~scanf("%d", &a))
    {
        int i = 0;
        for (i = 1; i <= a; i++)
        {
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        } 
    }
    return 0;
}