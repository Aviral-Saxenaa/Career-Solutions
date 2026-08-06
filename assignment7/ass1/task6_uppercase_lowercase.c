#include <stdio.h>

void check_case(char *c)
{
    if (*c >= 65 && *c <= 90) {
        printf("upper");
    } else if (*c >= 97 && *c <= 122) {
        printf("lower");
    } else {
        printf("invalid");
    }
}

int main(void)
{
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    check_case(&ch);

    return 0;
}
