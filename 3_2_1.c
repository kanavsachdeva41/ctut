// WAP to enter number till the user wants. At the end, it should enter the count of positives,negatives and zero. //
#include <stdio.h>
void main()
{
    int n, pos = 0, neg = 0, zero = 0;
    char choice;

    do
    {
        printf("enter n:");
        scanf("%d", &n);

        if (n > 0)
        {
            pos++;
        }
        else if (n < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
        printf("do you want to input more values of n:");
        scanf(" %c", &choice);
    } while (choice == 'y');

    printf("Conclusion:\n");
    printf("Positive numbers: %d \n", pos);
    printf("Negative numbers: %d \n", neg);
    printf("Zeros: %d \n", zero);
}