#include <stdio.h>
int main()
{
    int z, i, sum = 0;
    printf("Enter a  integer");
    scanf("%d",&z);
    for(i=1;i<= z;i++)
    {
        sum += i; 
    }
 printf("Sum = %d",sum);
return 0;
}
