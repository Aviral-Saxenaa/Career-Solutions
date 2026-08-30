#include <stdio.h>

typedef struct Time
{
    int hrs;
    int min;
    int sec;
} Time;

Time storeTime()
{
    Time t;

    printf("Enter hours: ");
    scanf("%d", &t.hrs);

    printf("Enter minutes: ");
    scanf("%d", &t.min);

    printf("Enter seconds: ");
    scanf("%d", &t.sec);

    return t;
}

Time addTime(Time t1, Time t2)
{
    Time result;

    result.hrs = t1.hrs + t2.hrs;
    result.min = t1.min + t2.min;
    result.sec = t1.sec + t2.sec;

    while (result.sec >= 60)
    {
        result.sec = result.sec - 60;
        result.min = result.min + 1;
    }

    while (result.min >= 60)
    {
        result.min = result.min - 60;
        result.hrs = result.hrs + 1;
    }

    return result;
}

int convertToSeconds(Time t)
{
    return t.hrs * 3600 + t.min * 60 + t.sec;
}

void displayTime(Time t)
{
    printf("Time is %d:%d:%d\n", t.hrs, t.min, t.sec);
}

int main()
{
    Time t1, t2, result;

    printf("Enter first time\n");
    t1 = storeTime();

    printf("\nEnter second time\n");
    t2 = storeTime();

    result = addTime(t1, t2);

    printf("\nFirst time: ");
    displayTime(t1);

    printf("Second time: ");
    displayTime(t2);

    printf("Addition: ");
    displayTime(result);

    printf("\nFirst time in seconds: %d\n", convertToSeconds(t1));
    printf("Second time in seconds: %d\n", convertToSeconds(t2));

    return 0;
}