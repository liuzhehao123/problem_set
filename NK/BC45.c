#include <stdio.h>

int main()
{
    int max = 0;
    int chinese, math, english;
    scanf("%d %d %d", &chinese, &math, &english);

    if (chinese >= math && chinese >= english)  max = chinese;
    else if (math >= chinese && math >= english)  max = math;
    else if (english >= chinese && english >= math)  max = english;
    printf("%d\n", max);
    return 0;
}