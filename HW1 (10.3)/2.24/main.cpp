#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Please enter an integer:" <<endl;
    cin >> a;

    if(a%2 == 1)
    {
        cout << "This integer is odd.";
    }

    else
    {
        cout << "This integer is even.";
    }

    cout << endl;

    return 0;
}
