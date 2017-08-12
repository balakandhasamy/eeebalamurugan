#include <stdio.h>
int main()
{
    int value, power;
     long long n = 1;
     printf("Enter a value number: ");
    scanf("%d", &value);

    printf("Enter an power: ");
    scanf("%d", &power);

    while (power!= 0)
    {
        n *= value;
        --power;
    }

    printf("final = %lld", n);

    return 0;
    }
    
