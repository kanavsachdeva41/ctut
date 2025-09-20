#include <stdio.h>
void main()
{
    int l,b;
    printf("Enter length of rectangle: \n");
    scanf("%d", & l);

    printf("Enter breath of rectangle: \n");
    scanf("%d", & b);

    printf("Area of rectangle = %d \n", l*b);
    printf("Perimeter of rectangle = %d", 2*(l+b));
}