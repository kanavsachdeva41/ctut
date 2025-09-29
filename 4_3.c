// Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks. //

#include <stdio.h>

int main() 
{
    {
        int blockVar = 500;
        printf("Inside block: blockVar = %d\n", blockVar);
    }
    // printf("Outside block: blockVar = %d\n", blockVar); // Error: blockVar not accessible here
    return 0;
}