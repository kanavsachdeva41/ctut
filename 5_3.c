// WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers. //
#include <stdio.h>
void main()
{
    int i,n,num,freq=0;

    printf("Enter n: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements of array: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the number whose frequency we want to find: ");
    scanf("%d", &num);

    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            freq++;
        }
    }

    printf("Frequency of element %d in array: %d",num,freq);
}