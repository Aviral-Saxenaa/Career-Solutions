//strong no

#include <stdio.h>

int main()

{

    int no, original, sum = 0;

    printf("Enter a number: ");

    scanf("%d", &no);

    original = no;

    while (no > 0)

    {

        int digit = no % 10;

        int fact = 1;

        for (int i = 1; i <= digit; i++)

        {

            fact *= i;

        }

        sum += fact;

        no /= 10;

    }

    if (sum == original)

    {

        printf("%d is a Strong number", original);

    }

    else

    {

        printf("%d is not a Strong number", original);

    }

}