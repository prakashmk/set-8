#include <stdio.h>
#include<string.h>
int main ()
{ 
char s[20];
int len, i, flag = 0;
printf ("Enter the string:");
scanf ("%s", s);
len = strlen (s);
for (i = 1; i <= len; i++)
{
 if (s[i] == s[len - i - 1])
	flag = flag + 1;
 }
  if (flag == len)
      printf ("Yes,It is palindrome");
  else
    printf (" No,It is not palindrome");
  return 0;
}
