#include <stdio.h>

int main() 
{
    int countA = 0, countB = 0;
    char ch;
    while (~scanf("%c", &ch))
    {
        if (ch == 'A') countA++;
        else if (ch == 'B') countB++;
    }

    if (countA > countB) printf("A\n");
    else if (countA < countB) printf("B\n");
    else printf("E\n");
    return 0;
}