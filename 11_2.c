// Write a program to apply left shift and right shift operator. //

#include <stdio.h>
int main() 
{
    unsigned int a = 21; // Binary: 00010101

    // Left Shift
    printf("a      = %u (Binary: 00010101)\n", a);
    printf("a << 1 = %u (Left shift by 1)\n", a << 1); // 42 (00101010)
    printf("a << 2 = %u (Left shift by 2)\n", a << 2); // 84 (01010100)

    // Right Shift
    printf("a >> 1 = %u (Right shift by 1)\n", a >> 1); // 10 (00001010)
    printf("a >> 2 = %u (Right shift by 2)\n", a >> 2); // 5 (00000101)

    return 0;
}