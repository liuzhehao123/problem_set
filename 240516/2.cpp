// https://www.luogu.com.cn/problem/P5719

#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a = 0, b = 0, cnt_a = 0, cnt_b = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (i % k == 0)
        {
            a += i;
            cnt_a++;
        }
        else 
        {
            b += i;
            cnt_b++;
        }
    }

    printf("%.1f %.1f\n", a * 1.0 / cnt_a, b * 1.0 / cnt_b);
    
    return 0;
}