#include <stdio.h>
int main()
{
    char z;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&z);
    isLowercaseVowel = (z == 'a' || z == 'e' || z == 'i' || z == 'o' || z == 'u');

    isUppercaseVowel = (z == 'A' || z == 'E' || z == 'I' || z == 'O' || z == 'U');

    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", z);
    else
        printf("%c is a consonant.", z);
    return 0;
}
