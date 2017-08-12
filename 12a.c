#include <stdio.h>
int main()
{
    int n, Nm, R = 0;
    printf("Enter any number to check palindrome: ");
    scanf("%d", &n);
    Nm = n;
    while(n != 0)
    {
        R = (R * 10) + (n % 10);
        n = n / 10;
    }
    if(R== Nm)
    {
        printf("%d is palindrome.", Nm);
    }
    else
    {
        printf("%d is not palindrome.", Nm);
    }
    return 0;
}
