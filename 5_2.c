// WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array. //
#include <stdio.h>
void main()
{
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements of array: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int pos=0,neg=0,odd=0,even=0;

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            pos++;
        }
        if(a[i]<0)
        {
            neg++;
        }
        if(a[i]%2!=0)
        {
            odd++;
        }
        if(a[i]%2==0)
        {
            even++;
        }
    }

    printf("Number of positive elements: %d\nNumber of negative elements: %d\nNumber of odd elements: %d\nNumber of even elements: %d\n", pos,neg,odd,even);

}