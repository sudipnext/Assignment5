// 7.WAP to find the number of vowels, consonants, digits and white spaces in a given string.
#include <stdio.h>
int main() {
    char str[50];
    int vowels, consonant, digit, space;

    vowels = consonant = digit = space = 0;

    printf("Enter a line of string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') {
            ++vowels;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            ++consonant;
        } else if (str[i] >= '0' && str[i] <= '9') {
            ++digit;
        } else if (str[i] == ' ') {
            ++space;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    return 0;
}