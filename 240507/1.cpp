// https://www.acwing.com/problem/content/750/
#include <iostream>
using namespace std;
int main()
{
    char S;
    int n = 0;
    double M[12][12] = {0}, sum = 0;
    cin >> S;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
            if (i >= -j + 12)
            {

                sum += M[i][j];
                n++;
            }
        }
    }
    if (S == 'S')
    {
        printf("%.1lf", sum);
    }
    else
    {
        printf("%.1lf", sum / n);
    }
}