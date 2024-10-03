#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int y = 1;y <= 5;y++)
    {
        for(int x = 1;x <= 9;x++)
        {
            if((x+y >= 6 && x+y <= 14) && (x-y < 5))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
