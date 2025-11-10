#include "ARITHMETIC.h"
#include <stdio.h>
int main() 
{
    int num1, num2, choice;

    printf("=== Arithmetic Operations using Static Library ===\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nSelect operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("6. Power\n");
    printf("7. All operations\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\n--- Results ---\n");

    switch(choice) {
        case 1:
            printf("%d + %d = %d\n", num1, num2, add(num1, num2));
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
            break;
        case 4:
            if (num2 != 0)
                printf("%d / %d = %.2f\n", num1, num2, divide(num1, num2));
            else
                printf("Error: Division by zero!\n");
            break;
        case 5:
            if (num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, modulo(num1, num2));
            else
                printf("Error: Modulo by zero!\n");
            break;
        case 6:
            printf("%d ^ %d = %d\n", num1, num2, power(num1, num2));
            break;
        case 7:
            printf("%d + %d = %d\n", num1, num2, add(num1, num2));
            printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
            printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
            if (num2 != 0) {
                printf("%d / %d = %.2f\n", num1, num2, divide(num1, num2));
                printf("%d %% %d = %d\n", num1, num2, modulo(num1, num2));
            }
            printf("%d ^ %d = %d\n", num1, num2, power(num1, num2));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
