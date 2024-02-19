//CCF真题
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int main()
{
    int res[1001];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &res[i]);
    }
    qsort(res, n, sizeof(int), cmp);

    int count = 1, max = 0, index = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (res[i] == res[i + 1])
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
                index = i;
            }
            count = 1;
        }
    }

    if (count > max)
    {
        max = count;
        index = n - 1;
    }
    printf("%d\n", res[index]);
    return 0;
}