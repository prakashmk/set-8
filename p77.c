#include <stdio.h> 
int main()
{
 int i, n;    
 printf("\nEnter any number to Find Factors:");
 scanf("%d", &n); 
 printf("\nFactors of a Given Number is:\n");
 for (i = 1; i <= n; i++)
 {
   if(n%i == 0)
    {
		 printf("%d", i);
		 }
  } 
 return 0;
}
