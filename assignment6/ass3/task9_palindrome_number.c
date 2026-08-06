#include <stdio.h>

int isPalindrome(int number) {
    int original = number;
    int reverse = 0;

    while (number > 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    return reverse == original;
}

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}
