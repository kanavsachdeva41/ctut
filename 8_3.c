// Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function. //
#include <stdio.h>
void main()
{
    int a=5;
    float b=10.00;
    char c='A';

    printf("Values of a, b and c before operations: %d %.2f %c\n", a, b, c);

    op(&a,&b,&c);

    printf("Values of a, b and c after operations: %d %.2f %c", a, b, c);
}

void op(int *p1,float *p2,char *p3)
{
    (*p1)++;
    *p2=(*p2)/2.00;
    (*p3)++;
}