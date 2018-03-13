#include <stdio.h>

int main() 
 {
	 int n,t;
	 printf("\nEnter the number : ");
	 scanf("%d",&n);
	 printf("\nThe odd numbers in %d are : ",n);
	 while(n!=0) 
	 {
		 t=n%10;
		 if(t!=0&&(t%2)!=0)
		 {
			 printf("%2d",t);
		 }
	  	n=n/10;
	 }
	 return 0;
 }
