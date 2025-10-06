// Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num. 
#include <stdio.h>
int fib(int n);

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", & n);

    printf("Fibonacci series upto %dth terms is: \n", n);

    for(int i=0;i<n;i++)
    {
        printf("%d ", fib(i));
    }
}

int fib( int n)
{
    if ( n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    int fibnm1 =fib(n-1), fibnm2 = fib(n-2);
    int fibn = fibnm1 +fibnm2;
    return fibn;
}