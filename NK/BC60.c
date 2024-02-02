#include <stdio.h>

int main() {
    int a;
    while (scanf("%d", &a) != EOF) 
    {
        int i = 0;
        for (i = 0; i < a; i++)
        {
            int j = 0;
            for (j = 1; j < a-i; j++)
            {
                printf("  ");
            }
            int k = 0;
            for (k = 0; k < i+1; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}