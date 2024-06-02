#include <cstdio>
#include <cmath>

int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("%.1lf\n", area);

    return 0;
}