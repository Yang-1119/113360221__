#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Please enter two integers:" << endl;
    cin >> a;
    cin >> b;

    if(a%b == 0)
    {
        cout << "The first is a multiple of the second.";
    }
    else
    {
        cout << "The first isn't a multiple of the second.";
    }
    return 0;
}
