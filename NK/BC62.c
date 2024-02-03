#include<stdio.h>

int main()
{
    int a = 0;
    while (scanf("%d", &a) != EOF)
    {
        int i = 0;
        for(i = a; i > 0; i--)
        {
            int x = 0;
            for(x = a - i; x > 0; x--)
            {
                printf(" ");
            } 
            int j = 0;
            for(j = i; j > 0; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}