#include <iostream>

using namespace std;

int main()
{
    char c;
    int num_digits = 0;
    int num_letter = 0;

    while (cin >> c)
    {
        if (c >= '0' && c <= '9')
            num_digits++;
        else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            num_letter++; 
    }

    cout << "num_digits:" << num_digits << endl;
    cout << "num_letter:" << num_letter << endl;

    return 0; 
}