#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f;

    printf("Total miles driven per day:");
    scanf("%f",&a);

    printf("Cost gallon of gasoline:");
    scanf("%f",&b);

    printf("Average miles per gallon:");
    scanf("%f",&c);

    printf("Parking fees per day:");
    scanf("%f",&d);

    printf("Tolls per day:");
    scanf("%f",&e);

    f = (a/c)*b+d+e;

    printf("Your cost per day of driving to work is ");
    printf("%.2f\n",f);

    return 0;
}
