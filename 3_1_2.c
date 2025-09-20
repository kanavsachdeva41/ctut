#include <stdio.h>
void main()
{
    float w, h;

    printf("enter weight and height of person:");
    scanf("%f %f", &w, &h);

    float bmi = (w / (h * h));

    printf("bmi of person is:%f\n", bmi);

    if (bmi < 15)
    {
        printf("Starvation");
    }
    else if (bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Anorexic");
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Underweight");
    }
    else if (bmi >= 18.6 && bmi <= 24.9)
    {
        printf("IDEAL");
    }
    else if (bmi >= 25 && bmi <= 25.9)
    {
        printf("Overweight");
    }
    else if (bmi >= 30 && bmi <= 39.9)
    {
        printf("Obese");
    }
    else
    {
        printf("Morbidity Obese");
    }
}