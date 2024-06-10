#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);

    if (a + b <= c || a + c <= b || b + c <= a) 
    {
        cout << "Not triangle" << endl;
    }
    else
    {
        if (a * a + b * b == c * c || a * a  + c * c == b * b || b * b + c * c == a * a) 
            cout << "Right triangle" << endl;
        if (a * a + b * b > c * c) 
            cout << "Acute triangle" << endl;
        if (a * a + b * b < c * c) 
            cout << "Obtuse triangle" << endl;
        if (a == b || a == c || b == c) 
            cout << "Isosceles triangle" << endl;
        if (a == b && b == c) 
            cout << "Equilateral triangle" << endl;
    }

    return 0;
}