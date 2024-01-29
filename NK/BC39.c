#include <stdio.h>

int main() 
{
    unsigned int n;
    scanf("%u", &n);
    unsigned int score[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%u", &score[i]);
    }

    int j = 0;
    for (j = 0; j < n; j++)
    {
        int k = 0;
        for (k = 0; k < n; k++)
        {
            if (score[j] > score[k])
            {
                int temp;
                temp = score[j];
                score[j] = score[k];
                score[k] = temp;
            }
        }
    }

    printf("%u %u %u %u %u\n", score[0], score[1], score[2], score[3], score[4]);
    return 0;
}



