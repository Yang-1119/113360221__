#include <iostream>

using namespace std;

int main()
{

    for(int y = 1;y <= 9;y++)
    {

        for(int x = 1;x <= 62;x++)
        {
           if(y == 1)
           {
               if(x <= 9 || (x >= 21 && x <= 23) || x == 40 || x == 58)
               {
                   cout << "*";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 2)
           {
               if(x == 1 || x == 9 || x == 19 || x == 25 || (x >= 39 && x <= 41) || x == 57 || x == 59)
               {
                   cout << "*";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 3)
           {
               if(x == 1 || x == 9 || x == 17 || x == 27 || (x >=38 && x <= 42) || x == 56 || x == 60)
               {
                   cout << "*";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 4 || y == 5)
           {
               if(x == 1 || x == 9 || x == 17 || x == 27 || x == 40 || x == 59-y || x == 57+y)
               {
                   cout << "*";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 6)
           {
               if(x == 1 || x == 9 || x == 17 || x == 27 || x == 40 || x == 55 || x == 61)
               {
                   cout << "*";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 7)
           {
               if(x == 1 || x == 9 || x == 17 || x == 27 || x == 40 || x == 56 || x == 60)
               {
                   cout << "*";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 8)
           {
               if(x ==1 || x == 9 || x == 19 || x == 25 || x == 40 || x == 57 || x == 59)
               {
                   cout << "*";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 9)
           {
               if(x <= 9 || (x >= 21 && x <= 23) || x == 40 || x == 58)
               {
                   cout << "*";
               }
               else
               {
                   cout << " ";
               }
           }
        }
        cout << endl;

    }
    return 0;
}
