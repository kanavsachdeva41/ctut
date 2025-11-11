// WAP to do basic operations using unions //
#include <stdio.h>
#include <string.h>

union student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    union student s1;

    // Only one member can be used meaningfully at a time
    s1.roll = 402;
    printf("Roll no. : %d\n", s1.roll);

    strcpy(s1.name, "Kick");
    printf("Name : %s\n", s1.name);

    s1.marks = 97.0;
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}