#include <stdio.h>

int isPrime(int number) {
    int i;

    if (number < 2) {
        return 0;
    }

    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

int isPalindrome(int number) {
    int original = number;
    int reverse = 0;

    while (number > 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    return reverse == original;
}

int reverseNumber(int number) {
    int reverse = 0;

    while (number > 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    return reverse;
}

int sumOfDigits(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

void showResult(int choice, int number) {
    switch (choice) {
        case 1:
            if (number % 2 == 0) {
                printf("Number is even.\n");
            } else {
                printf("Number is odd.\n");
            }
            break;
        case 2:
            if (isPrime(number)) {
                printf("Number is prime.\n");
            } else {
                printf("Number is not prime.\n");
            }
            break;
        case 3:
            if (isPalindrome(number)) {
                printf("Number is palindrome.\n");
            } else {
                printf("Number is not palindrome.\n");
            }
            break;
        case 4:
            if (number > 0) {
                printf("Number is positive.\n");
            } else if (number < 0) {
                printf("Number is negative.\n");
            } else {
                printf("Number is zero.\n");
            }
            break;
        case 5:
            printf("Reverse = %d\n", reverseNumber(number));
            break;
        case 6:
            printf("Sum of digits = %d\n", sumOfDigits(number));
            break;
        default:
            printf("Invalid choice.\n");
    }
}

int main(void) {
    int choice;
    int number;

    printf("1. Check even or odd\n");
    printf("2. Check prime or not\n");
    printf("3. Check palindrome or not\n");
    printf("4. Check positive, negative or zero\n");
    printf("5. Reverse a number\n");
    printf("6. Find sum of digits\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &number);

    showResult(choice, number);

    return 0;
}
