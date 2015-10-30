/*LAB 2 Q4 */

/* ------------------------------------------------------------

Programmer: Aleena Chaudhry

ID: B00074979

Date: 26th September 2014

Purpose:

------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 float a[2],b[2],c[2], perimeter,sqrt,x,y,z;

   printf("\n Perimeter of triangle \n");
   printf("---------------------------\n");

   printf("Enter two values for a:\n");
   scanf("%f%f",&a[0],&a[1]);

   printf("Enter two values for b:\n");
   scanf("%f%f",&b[0],&b[1]);

   printf("Enter two values for c:\n");
   scanf("%f%f",&c[0],&c[1]);

   x= sqrt(((double)(b[1]-a[0])*(b[1]-a[0]))+((b[1]-a[0])*(b[1]-a[0])));
   y= sqrt(((double)(c[1]-b[0])*(c[1]-b[0]))+((c[1]-b[0])*(c[1]-b[0])));
   z= sqrt(((double)(c[1]-a[0])*(c[1]-a[0]))+((c[1]-a[0])*(c[1]-a[0])));

   perimeter= x+y+z;

   printf("The perimeter of the three values is: %f\n", perimeter);
    return 0;


}
