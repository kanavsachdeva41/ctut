// WAP to print the pattern://
/*
1
11
123
1331
*/
#include <stdio.h>
void main()
{
    int i,r=1;

    for(i=1;i<=4;i++)
    {
        if(i==1)
        {
            printf("%d\n",r);
        }
        else
        {
            r=r*11;
            printf("%d\n",r);
        }
    }
}