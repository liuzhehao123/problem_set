#include <stdio.h>

int main() 
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'z')
    printf("YES\n");
    else printf("NO\n");
    
    return 0;
}