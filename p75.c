#include <stdio.h>
#include<string.h>
int main()
{ 
 int n,s; 
 char a[40];
 printf("\nEnter the string: ");
 scanf("%s",&a);
 s=strlen(a);
if(s%2==0)
	{
		n=s/2;
		a[n]='*';
		a[n-1]='*';
	}
	else
	{
		n=s/2;
		a[n]='*';
	}
	printf("\nThe modulated string is %s.",a);
	return 0;
}


