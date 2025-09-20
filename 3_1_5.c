
#include <stdio.h>
void main()
{
    float l1,l2,l3,b1,b2,b3;

    printf("enter length and breath of rectangle 1:\n");
    scanf("%f %f", &l1, &b1);

    printf("enter length and breath of rectangle 2:\n");
    scanf("%f %f", &l2, &b2);

    printf("enter length and breath of rectangle 3:\n");
    scanf("%f %f", &l3, &b3);

    float p1=2*(l1+b1), p2=2*(l2+b2), p3=2*(l3+b3);

    printf("Perimeter of recatngle 1: %f \n Perimeter of rectangle 2: %f \n Perimetr of rectangle 3: %f \n", p1, p2, p3);

    (p1>p2 && p1>p3) ? printf("Rectangle 1 has the highest perimeter") : (p2>p1 && p2>p3) ? printf("Rectangle 2 has the highest perimeter.") : printf("Rectangle 3 has the highest perimeter.");

    
}