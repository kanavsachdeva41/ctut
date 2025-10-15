// Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges. 
#include <stdio.h>

int ISPRIME(int n)
{
     if(n<=1)
        return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int lr,ur;

    printf("Enteer lower and upper range: ");
    scanf("%d %d", & lr, &ur);

    printf("Prime number ranging between %d and %d are: \n", lr, ur);

    for(int i=lr; i<=ur; i++)
    if(ISPRIME(i) == 1)
    {
        printf("%d ", i);
    }
}