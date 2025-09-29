// Write a program to apply bitwise OR, AND and NOT operators on bit level. //

#include <stdio.h>
int main() 
{
    int a = 5;      // Binary: 0101
    int b = 3;      // Binary: 0011

    int or_result = a | b;   // Bitwise OR
    int and_result = a & b;  // Bitwise AND
    int not_result = ~a;     // Bitwise NOT

    printf("a      = %d (Binary: 0101)\n", a);
    printf("b      = %d (Binary: 0011)\n", b);

    printf("a | b  = %d (Bitwise OR)\n", or_result);    // 7 (0111)
    printf("a & b  = %d (Bitwise AND)\n", and_result);  // 1 (0001)
    printf("~a     = %d (Bitwise NOT)\n", not_result);  // -6 (depends on system, two's complement representation)

    return 0;
}