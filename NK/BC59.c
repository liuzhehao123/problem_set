#include <stdio.h>

int main() 
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        int i = 0;
        for (i = a; i > 0; i--)
        {
            int j = 0;
            for (j = i; j > 0; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}