#include <stdio.h>
int main()
{
int n, j, sum = 0;
 printf("Enter a  number is ");
    scanf("%d",&n);

    for(j=1; j <= n; ++j)
    {
  printf("%d",j);
     sum=sum+j;
    }
 printf("Sum of %d: is %d",n,sum);

    return 0;


}

