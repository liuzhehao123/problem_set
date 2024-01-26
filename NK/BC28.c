#include <stdio.h>

int main() 
{
    char ch;
    while(~scanf("%c", &ch))
    {
        getchar();
        putchar(ch+32);
        printf("\n");
    }
    return 0;
}