#include <iostream>

using namespace std;

int main()
{
    int a, b, day = 0, max = 0, sum = 0;
    for (int i = 1; i <= 7; ++i)
    {
        cin >> a >> b;
        sum = a + b;
        if (sum > 8 && sum > max)
        {
            max = sum;
            day = i;
        }
    }

    cout << day << endl;

    return 0;
}