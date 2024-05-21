//https://www.acwing.com/problem/content/751/

#include <cstdio>

using namespace std;

int main()
{
    double a[12][12];
    char letter;
    scanf("%c", &letter);
    
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    
    double sum = 0;
    int count = 0;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = i + 1; j < 11 - i; ++j)
        {
            sum += a[i][j];
            count++;
        }
    }
    
    if (letter == 'S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum / count);
    
    return 0;
}