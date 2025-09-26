#include <stdio.h>
void main()
{
    float x1,x2,x3,y1,y2,y3;

    printf("enter coordinates of point1:");
    scanf("%f %f", &x1, &y1);

    printf("enter coordinates of point2:");
    scanf("%f %f", &x2, &y2);

    printf("enetr coordinates of point3:");
    scanf("%f %f", &x3, &y3);

    if ((x1*y2 + x2*y3 + x3*y1) - (y1*x2 + y2*x3 + y3*x1) == 0)
    {
          printf("The points are collinear.");
    }
    else 
    {
        printf("The points are not collinear.");
    }  


}