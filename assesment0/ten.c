#include <stdio.h>

int main()
{
    float one = 90;
    float two = 80;
    float three = 70;
    float four = 60;
    float five = 50;

    float total = one + two + three + four + five;
    printf("The total is: %f out of 500 \n", total);

    float average = (one + two + three + four + five) / 5;
    printf("The average is: %f\n", average);
}