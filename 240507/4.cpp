// https://www.acwing.com/problem/content/754/

#include <iostream>

using namespace std;

int main()
{
    char letter;
    cin >> letter;

    double a[12][12];
    int count = 0;
    double sum = 0;

    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            cin >> a[i][j];
            if (i < j && i + j >= 12)
            {
                sum += a[i][j];
                count++;
            }
        }
    }

    if (letter == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum / count);

    return 0;
}