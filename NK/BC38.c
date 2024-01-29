#include<stdio.h>

int main() 
{
    int i = 0;
    for (i = 10000; i < 100000; i++) 
    { //假设是98564
        int a = i / 10000; //9 ——万
        int b = i % 10000 / 1000; //8 ——千
        int c = i % 1000 / 100; //5 ——百
        int d = i % 100 / 10; //6 ——十
        int e = i % 10; //4 ——个

        if (i == a*(b*1000+c*100+d*10+e)+(a*10+b)*(c*100+d*10+e)+(a*100+b*10+c)*(d*10+e)+(a*1000+b*100+c*10+d)*e)
        {
            printf("%d ", i);
        }

    }

    return 0;
}