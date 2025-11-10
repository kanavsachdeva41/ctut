#ifndef ARITHMETIC_H
#define ARITHMETIC_H

// Function declarations for arithmetic operations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulo(int a, int b);
int power(int base, int exp);

#endif


// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers
float divide(int a, int b) 
{
    if (b == 0) {
        return 0.0; // Handle division by zero
    }
    return (float)a / b;
}

// Function to find modulo
int modulo(int a, int b) {
    if (b == 0) {
        return 0; // Handle division by zero
    }
    return a % b;
}

// Function to calculate power
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
return result;
}
