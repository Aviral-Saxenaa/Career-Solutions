#include <stdio.h>

const char *checkDivisibility(int number) {
    if (number % 3 == 0 && number % 5 == 0) {
        return "Divisible by both";
    }
    if (number % 3 == 0) {
        return "Divisible by 3 but not by 5";
    }
    if (number % 5 == 0) {
        return "Divisible by 5 but not by 3";
    }
    return "Divisible by none";
}

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%s\n", checkDivisibility(number));

    return 0;
}
