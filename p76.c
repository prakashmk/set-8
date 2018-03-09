#include <stdio.h>
int main(void)
{
	int i,n,flag=0,a;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	a=n/2;
	for(i=2;i<=a;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("\n%d is a composite number",n);
	}
	else
	{
		printf("\n%d is not a composite number",n);
	}
	return 0;
}
