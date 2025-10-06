// Develop a recursive function GCD (num1, num2) that accepts two integer arguments. Write a C program that invokes this function to find the greatest common divisor of two given integers. 
#include <stdio.h>

int gcd(int a,int b)
{
    if(b ==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int main()
{
    int a,b,result;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("HCF of %d and %d is %d", a, b, gcd(a,b));
}
