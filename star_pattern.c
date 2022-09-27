/*C Program to print star pattern*/
/* Reg No,- 22-27-04*/
#include<stdio.h>

int main ()
{
  int i, j, n = 4;
  for (i = 1; j <= n; i++)
    {
      for (j = i; j <= n; j++)
	{
	  printf (" ");
	}
      for (j = 1; j < i; j++)
	{
	  printf ("*");
	}
      for (j = 1; j <= i; j++)
	{
	  printf ("*");
	}
      printf ("\n");
    }
  return 0;
}