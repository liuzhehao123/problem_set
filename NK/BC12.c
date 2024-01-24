#include <stdio.h>

int main() 
{
    char ch;
    scanf("%c", &ch);
    int i = 0;
    for (i = 1; i <= 5; i++)
    {
        int j = 0;
        for (j = 5 - i; j > 0; j--)
        {
            printf(" ");
        }
        int k = 0;
        for (k = 1; k <= i; k++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}