#include <stdio.h>
int main()
{
    char y;
    int Lowercase, Uppercase;

    printf("Enter an alphabet: ");
    scanf("%c",&y);
    Lowercase = (y == 'a' || y == 'e' || y == 'i' || y == 'o' || y == 'u');

    Uppercase = (y == 'A' || y == 'E' || y == 'I' || y == 'O' || y == 'U');

    if (Lowercase || Uppercase)
        printf("%c is a vowel.", y);
    else
        printf("%c is a consonant.", y);
    return 0;
}
