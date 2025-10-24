// WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers. //
#include <stdio.h>
void main()
{
    int i,n;
    printf(" Enter the number of Elements you want to enter: ");
    scanf("%d",&n);

    int a[n];

    printf("enter values of arrays to be input: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int max1,max2;

    if(a[0]>a[1])
    {
        max1=a[0];
        max2=a[1];
    }
    else
    {
        max1=a[1];
        max2=a[0];
    }

    for(i=2;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if (a[i]>max2)
        {
            max2=a[i];
        }
    }
    printf("Second largest element of array is: %d", max2);
}
