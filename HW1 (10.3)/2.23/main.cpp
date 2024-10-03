#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Please enter three integers:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a >= b && a >= c)
    {
        if(b >= c)
        {
            cout << "The largest integer is " << a << ",and the smallest intger is " << c << ".";
        }
        else
        {
            cout << "The largest integer is " << a << ",and the smallest intger is " << b << ".";
        }
     return 0;
    }

    if(b >= a && b >= c)
    {
        if(a >= c)
        {
            cout << "The largest integer is " << b << ",and the smallest intger is " << c << ".";
        }
        else
        {
            cout << "The largest integer is " << b << ",and the smallest intger is " << a << ".";
        }
     return 0;
    }

    if(c >= a && c >= b)
    {
        if(a >= b)
        {
            cout << "The largest integer is " << c << ",and the smallest intger is " << b << ".";
        }
        else
        {
            cout << "The largest integer is " << c << ",and the smallest intger is " << a << ".";
        }
     return 0;
    }

    cout << endl;

}
