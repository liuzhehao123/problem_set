#include <stdio.h>

int main() 
{
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        getchar();
        if (ch >= 'A' && ch <= 'z') printf("%c is an alphabet.\n", ch);
        else printf("%c is not an alphabet.\n", ch);

    }

    return 0;
}