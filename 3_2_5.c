// Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit. //

#include<stdio.h>
void main()
{
    int a,b,c,d;

    for(a=1;a<=20;a++)
    {
        for(b=1;b<=20;b++)
        {
            for(c=1;c<=20;c++)
            {
                for(d=1;d<=20;d++)
                {
                    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
                    {
                        int x=a*a*a+b*b*b;
                        int y=c*c*c+d*d*d;

                        if(x==y)
                        {
                            printf("%d %d %d %d\n", a,b,c,d);
                        }
                    }
                }
            }
        }
    }
    
}