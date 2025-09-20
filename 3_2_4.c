// WAP to determine population at the end of each year in the last decade.//
#include <stdio.h>
void main()
{
    int pop;
    printf("enter population:");
    scanf("%d", &pop);

    for(int i=1;i<=10;i++)
    {
        pop=pop+((10*pop)/100);
        printf("population at the end of %d year is:%d \n", i,pop);
    }

}