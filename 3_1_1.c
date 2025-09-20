#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c;

    printf("enter side a, b and c:");
    scanf("%f %f %f", &a, &b, &c);

    if(a+b>c && b+c>a && a+c>b)
    {
        printf("Yes, it is a triangle. \n");

        if( (a==b && b!=c && a!=c) || (b==c && b!=a && c!=a) || (a==c && a!=b && c!=b) )
        {
            printf("Given triangle is isosceles triangle.");
        }
        else if(a==b && b==c && a==c)
        {
            printf("Given triangle is equilateral triangle.");
        }
        else if( pow(a,2) == pow(b,2)+pow(c,2) || pow(b,2) == pow(a,2)+pow(c,2) || pow(c,2) == pow(a,2)+pow(b,2))
        {
            printf("Triangle is a right angled triangle.");
        }
        else
        {
            printf("Triangle is scalene.");
        }
    }
    else
    {
        printf("It is not a triangle.");
    }
}