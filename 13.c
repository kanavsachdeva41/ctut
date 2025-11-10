// Write a program to define multiple macro to perform arithmetic functions. //
#include <stdio.h>
#define ADD(x,y) ((x)+(y))
#define SUB(x,y) ((x)-(y))
#define PRO(x,y) ((x)*(y))
#define QUO(x,y) ((y)!=0 ? ((x)/(y)) : 0)

void main()
{
  int a = 20, b = 10;

    printf("Addition of %d and %d is: %d\n", a, b, ADD(a, b));
    printf("Subtraction of %d and %d is: %d\n", a, b, SUB(a, b));
    printf("Multiplication of %d and %d is: %d\n", a, b, PRO(a, b));
    printf("Division of %d by %d is: %d\n", a, b, QUO(a, b))
}