// Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access. //
#include <stdio.h>
void main()
{
    int a1[] = {1,2,3};
    float a2[] = {1.0,2.0,3.0};
    char a3[] = {'a','b','c'};

    int *p1 = &a1[0];
    float *p2 = &a2[0];
    char *p3 = &a3[0];

    printf("Initial p1: %p, value: %d\n", p1,*p1);
    printf("Initial p2: %p, value: %.2f\n", p2, *p2);
    printf("Initial p3: %p, value: %c\n", p3, *p3);

    p1=p1+2;
    p2=p2+2;
    p3=p3+2;
    
    printf("\nAfter increment:\n");
    printf("p1: %p, value: %d\n", p1, *p1);
    printf("p2: %p, value: %.2f\n", p2, *p2);
    printf("p3: %p, value: %c\n", p3, *p3);

    (p1)--;
    (p2)--;
    (p3)--;
    
    printf("\nAfter decrement:\n");
    printf("p1: %p, value: %d\n", p1, *p1);
    printf("p2: %p, value: %.2f\n", p2, *p2);
    printf("p3: %p, value: %c\n", p3, *p3);

}