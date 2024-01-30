#include <stdio.h>

int main()
{
    char letter;
    char vowel[] = {'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U'};
    while (~scanf("%c", &letter))
    {
        getchar();
        int flag = 0;
        int i = 0;
        for (i = 0; i < 10; i++)
        {
            if (letter == vowel[i])  flag = 1;
        }
        if (flag == 1) printf("Vowel\n");
        else printf("Consonant\n");
    }
    return 0;
}