// Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. Print the values of both the pointers and the variables they point to. //
#include <stdio.h>
void main()
{
    int a=5;
    float b=5.5;
    char c='*';

    int *p1=&a;
    float *p2=&b;
    char *p3=&c;

    printf("Value stored in varaible a: %d\nAddress stored in pointer p1: %p\nValue pointed by p1: %d\n", a, p1, *p1);
    printf("Value stored in varaible b: %.2f\nAddress stored in pointer p2: %p\nValue pointed by p2: %.2f\n", b, p2, *p2);
    printf("Value stored in varaible c: %c\nAddress stored in pointer p1: %p\nValue pointed by p1: %c\n", c, p3, *p3);
}