#include <stdio.h>
int main()
{
    char z;
    int Lowercase, Uppercase;

    printf("Enter an alphabet: ");
    scanf("%c",&z);
    Lowercase = (z == 'a' || z == 'e' || z == 'i' || z == 'o' || z == 'u');

    Uppercase = (z == 'A' || z == 'E' || z == 'I' || z == 'O' || z == 'U');

    if (Lowercase || Uppercase)
        printf("%c is a vowel.", z);
    else
        printf("%c is a consonant.", z);
    return 0;
}
