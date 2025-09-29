// Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function. //

#include <stdio.h>

void testLocal() 
{
    int localVar = 50; // Local variable
    printf("Inside testLocal: localVar = %d\n", localVar);
}

int main() {
    testLocal();
    // printf("Inside main: localVar = %d\n", localVar); // Error: localVar not accessible here
    return 0;
}