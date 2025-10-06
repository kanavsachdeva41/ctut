// Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0.
//  Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages.
#include <stdio.h>

int facrec (int n)
{
    if(n == 0 ||n == 1)
    {
        return 1;
    }
    int facnm1=facrec(n-1);
    int facn=facrec(n-1)*n;
    return facn;
}

int facnonrec (int n)
{
    int fac=1;

    for (int i=1;i<=n;i++)
    {
        fac=fac*i;
    }

    return fac;
}

float bincoff (int n, int r)
{
    int num=facrec(n);
    int den=facrec(r)*facrec(n-r);
    return num/den;
}

int main()
{
    int n,r;

    printf("Enter n and r: ");
    scanf("%d %d", & n, & r);

    bincoff(n,r);

    printf("Binomial coefficient of n=%d and r=%d is %f", n , r, bincoff(n,r) );
}