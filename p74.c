#include <stdio.h>
#include <math.h>
 int main()
{     
   int a;
   float i;
   printf("Enter the decimal number:");
   scanf("%f",&i);
   a=round(i);
   printf("roundoff value:%d\n",a);
   return 0;
}
