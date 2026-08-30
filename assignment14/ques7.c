#include <stdio.h>

typedef struct Time
{
    int hour;
    int min;
    int sec;
} Time;

Time storeTime()
{
    Time t;

    printf("Enter hour: ");
    scanf("%d", &t.hour);

    printf("Enter minute: ");
    scanf("%d", &t.min);

    printf("Enter second: ");
    scanf("%d", &t.sec);

    return t;
}

void displayTime(Time *t)
{
    printf("Time is %d:%d:%d\n", t->hour, t->min, t->sec);
}

int main()
{
    Time t1;

    t1 = storeTime();
    displayTime(&t1);

    return 0;
}