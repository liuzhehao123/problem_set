//https://www.acwing.com/problem/content/728/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while (n--)
    {
        int x;
        cin >> x;
        
        bool is_prime = 1;
        for (int i = 2; i * i <= x; ++i)
        {
            if (x % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        
        if (is_prime) cout << x << " is prime" << endl;
        else cout << x << " is not prime" << endl;
    }
    
    return 0;
}
