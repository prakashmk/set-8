#include <stdio.h> 
int main()
{
  int n;    
  printf("\nEnter number:");
  scanf("%d", &n); 
  if(n%13==0)
  {
    printf("yes,The given number is multiple of 13");
  }
  else
  {
      printf("No,The given number is not a multiple of 13");
  }
  return 0;
}
