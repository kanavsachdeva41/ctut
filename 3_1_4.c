#include <stdio.h>
int main()
{
   int ref =2001,year,total_days;
   printf("enter the year");
   scanf("%d",&year);

   int diff=year-ref;
   int leap=diff/4;
   int non_leap=diff-leap;

   total_days=leap*366+non_leap*365;
   
   int day=total_days%7;

   switch(day)
   {
    case 0:  
    printf("monday");
    break;
    case 1:
    printf("tuesday");
    break;
    case 2:
    printf("wednesday");
    break;
    case 3:
    printf("Thursday");
    break;
    case 4:
    printf("Friday");
    break;
    case 5:
    printf("saturday");
    break;
    case 6:
    printf("sunday");
    break;
    default:
    printf("error");
    break;
   }
   return 0;
}