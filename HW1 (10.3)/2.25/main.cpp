#include <iostream>

using namespace std;

int main()
{
    for(int y = 1;y <= 17;y++)
    {

        for(int x = 1;x <= 11;x++)
        {

           if(y >= 1 && y <= 4)
           {
               if(x+y == 12)
               {
                   cout << "Y";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 5)
           {
               if(x <= 7)
               {
                   cout << "Y";
               }
               else
               {
                   cout << " ";
               }
           }


           if(y >= 6 && y <= 9)
           {

               if(x-y == 2)
               {
                   cout << "Y";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 11)
           {
               if(x == 2 || x == 8 || x == 9)
               {
                   cout << "S";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 12)
           {
               if(x == 1 || x == 7 || x == 10)
               {
                   cout << "S";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y >= 13 && y <= 15)
           {
               if(x == 1 || x == 6 || x == 11)
               {
                   cout << "S";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 16)
           {
               if(x == 2 || x == 5 || x == 11)
               {
                   cout << "S";
               }
               else
               {
                   cout << " ";
               }
           }

           if(y == 17)
           {
               if(x == 3 || x == 4 || x == 10)
               {
                   cout << "S";
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
