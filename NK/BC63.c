#include<stdio.h>

int main() 
{
    int num = 0;
    while (scanf("%d", &num) != EOF) 
    {
        for (int a = 0; a < num; a++) 
        { //打印上半部分三角
            for (int b = 0; b < num - a; b++) 
            { //打印空格
                printf(" ");
            }
            for (int c = 0; c <= a; c++) 
            { //打印*
                printf("* ");
            }
            printf("\n");
        }


        for (int i = 0; i < num + 1; i++) 
        { //打印下半部分

            for (int j = 0; j < i; j++) 
            {
                printf(" ");
            }
            for (int k = 0; k < num + 1 - i; k++) 
            {
                printf("* ");
            }


            printf("\n");
        }
    }
    return 0;
}