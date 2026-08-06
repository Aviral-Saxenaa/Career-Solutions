#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (isupper((unsigned char)ch)) {
        printf("%c is uppercase.\n", ch);
    } else if (islower((unsigned char)ch)) {
        printf("%c is lowercase.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
