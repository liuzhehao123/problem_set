// https://www.acwing.com/problem/content/744/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[1005];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    
    int min = 0;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] < a[min]) min = i;
    }
    
    printf("Minimum value: %d\n", a[min]);
    printf("Position: %d\n", min);
    
    return 0;
}