//https://www.acwing.com/problem/content/745/

#include <cstdio>

using namespace std;

int main()
{
    double a[12][12];
    int l;
    char letter;
    scanf("%d\n%c", &l, &letter);
    
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j <12; ++j)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    
    double sum = 0;
    for (int i = 0; i < 12; ++i)
    {
        sum += a[l][i];
    }
    
    if (letter == 'S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum / 12);
    
    return 0;
}