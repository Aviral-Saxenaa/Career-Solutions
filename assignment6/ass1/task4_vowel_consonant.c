#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = (char)tolower((unsigned char)ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main(void) {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isVowel(ch)) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}
