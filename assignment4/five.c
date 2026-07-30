// 5. Write a menu driven program to take a number for user and perform operations as follows.

// Press 1.To check number is even or odd.
// 2.To check number is prime or not.
// 3.To check number is pallindrome or not.
// 4.To check number is positive, negative or zero.
// 5.To reverse a number.
// 6.To find sum of digits.

#include <stdio.h>

int main(){
    int choice, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Menu:\n");
    printf("1. Check if the number is even or odd\n");
    printf("2. Check if the number is prime or not\n");
    printf("3. Check if the number is palindrome or not\n");
    printf("4. Check if the number is positive, negative or zero\n");
    printf("5. Reverse the number\n");
    printf("6. Find the sum of digits\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            if(number % 2 == 0)
                printf("%d is even\n", number);
            else
                printf("%d is odd\n", number);
            break;
        case 2:
            {
                int isPrime = 1;
                if(number <= 1) isPrime = 0;
                for(int i = 2; i <= number/2; i++){
                    if(number % i == 0){
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime)
                    printf("%d is prime\n", number);
                else
                    printf("%d is not prime\n", number);
            }
            break;
        case 3:
            {
                int original = number, reversed = 0, remainder;
                while (number != 0) {
                    remainder = number % 10;
                    reversed = reversed * 10 + remainder;
                    number /= 10;
                }
                if(original == reversed)
                    printf("%d is a palindrome\n", original);
                else
                    printf("%d is not a palindrome\n", original);
            }
            break;
        case 4:
            if(number > 0)
                printf("%d is positive\n", number);
            else if(number < 0)
                printf("%d is negative\n", number);
            else
                printf("The number is zero\n");
            break;
        case 5:
            {
                int reversed = 0, remainder, temp = number;
                while (temp != 0) {
                    remainder = temp % 10;
                    reversed = reversed * 10 + remainder;
                    temp /= 10;
                }
                printf("Reversed number: %d\n", reversed);
            }
            break;
        case 6:
            {
                int sum = 0, temp = number, digit;
                while (temp != 0) {
                    digit = temp % 10;
                    sum += digit;
                    temp /= 10;
                }
                printf("Sum of digits: %d\n", sum);
            }
            break;
        default:
            printf("Invalid choice\n");
    }
}