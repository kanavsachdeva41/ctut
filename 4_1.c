// Declare a global variable outside all functions and use it inside various functions to understand its accessibility. //

#include <stdio.h>

int globalVar = 100; // Global variable

void function1() 
{
    printf("Inside function1: globalVar = %d\n", globalVar);
}

void function2() {
    globalVar = 200;
    printf("Inside function2: globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main: globalVar = %d\n", globalVar);
    function1();
    function2();
    printf("Inside main after function2: globalVar = %d\n", globalVar);
    return 0;
}
