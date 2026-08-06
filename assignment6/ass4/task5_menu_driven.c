#include <stdio.h>

int main()
{
    int choice, num;

    printf("1. Even/Odd\n");
    printf("2. Prime Number\n");
    printf("3. Palindrome Number\n");
    printf("4. Positive/Negative/Zero\n");
    printf("5. Reverse Number\n");
    printf("6. Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(choice)
    {
        case 1:
            if(num % 2 == 0)
                printf("Even Number");
            else
                printf("Odd Number");
            break;

        case 2:
        {
            int i, prime = 1;

            if(num < 2)
                prime = 0;

            for(i = 2; i <= num / 2; i++)
            {
                if(num % i == 0)
                {
                    prime = 0;
                    break;
                }
            }

            if(prime)
                printf("Prime Number");
            else
                printf("Not Prime Number");

            break;
        }

        case 3:
        {
            int temp = num;
            int rev = 0;

            while(temp > 0)
            {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }

            if(rev == num)
                printf("Palindrome Number");
            else
                printf("Not Palindrome Number");

            break;
        }

        case 4:
            if(num > 0)
                printf("Positive Number");
            else if(num < 0)
                printf("Negative Number");
            else
                printf("Zero");
            break;

        case 5:
        {
            int temp = num;
            int rev = 0;

            while(temp > 0)
            {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }

            printf("Reverse = %d", rev);
            break;
        }

        case 6:
        {
            int temp = num;
            int sum = 0;

            while(temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }

            printf("Sum = %d", sum);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}