#include <stdio.h>
#include<string.h>

int main ()
{  
  int n,l,r;
  printf ("Enter the number:");
  scanf ("%d%d%d",&n,&l,&r);
  if (n>=l&&n<=r)
	  printf ("Yes");
  else
    printf ("No");
  return 0;
}
