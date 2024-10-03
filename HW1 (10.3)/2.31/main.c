#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("number  square  cube\n");
    for(int a = 1;a <= 10;a++)
    {
        printf("%-8d",a);
        printf("%-8d",a*a);
        printf("%-8d\n",a*a*a);
    }
    return 0;
}
