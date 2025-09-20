// WAP to print the multiplication table of a number entered by the user.//
#include <stdio.h>
void main()
{
    int n,num;

    printf("enter n:");
    scanf("%d", &n);

    for(int i=1;i<=10;i++)
    {
        num=n*i;
        printf("%d \n", num);
    }
}