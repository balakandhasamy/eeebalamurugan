#include <stdio.h> 
int main()
{
  int n,k,z=0;
  printf("Enter any number ");
  scanf("%d", &n);
  for (k= 1; k <= n; k++)
  {
      if (n %k == 0)
      {
         z++;
      }
  }
  if (z == 2)
  {
  	printf("%d is a Prime number");
  }
  else
  {
 	 printf(" %d is not a Prime number");
  }
  return 0;    
}
