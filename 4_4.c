// Declare a static local variable inside a function. Observe how its value persists across function calls. //

#include <stdio.h>

void demo()
{
    static int count = 0;  // static local variable
    count++;
    printf("count = %d\n", count);
}

int main()
{
    demo();
    demo();
    demo();
    demo();

return 0;
}