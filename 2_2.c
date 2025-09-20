#include <stdio.h>
void main()
{
    int c;
    printf("Enter temperature in C \n");
    scanf("%d", & c);

    float f=((9.00*c)/5.00) +32.00;
    printf("Temperature in fahrenheit is %.2f", f);
}