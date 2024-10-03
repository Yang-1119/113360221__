#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,w,a;

    printf("Please enter your height(m):\n");
    scanf("%f",&h);
    printf("Please enter your weight(kg):\n");
    scanf("%f",&w);

    a = (w/(h*h));

    printf("Your BMI is ");
    printf("%.1f",a);

    if(a <18.5)
    {
        printf("(underweiht)");
    }
    else if(a >= 18.5 && a <= 24.9)
    {
        printf("(normal)");
    }
    else if(a >= 25 && a <= 29.9)
    {
        printf("(overweight)");
    }
    else if(a >= 30)
    {
        printf("(obese)");
    }

    return 0;
}
