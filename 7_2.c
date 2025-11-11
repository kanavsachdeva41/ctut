// WAP to using structure for doing basic operation //
#include <stdio.h>
typedef struct student
{
    int roll;
    char name[100];
    float marks[5];
}stu;

int main()
{
    stu s1 = {101, "Kick", {90,87,82,94,90}};
    printf("\nStudents details:\n");
    printf("Roll no. : %d\n", s1.roll);
    printf("Name : %s\n", s1.name);
    printf("Marks: \n");
    for (int i=0;i<5;i++)
    {
        printf("Marks of student in subject %d is: %.2f\n", i+1, s1.marks[i]);
    }
    return 0;
}
