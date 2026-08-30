#include <stdio.h>

struct Date
{
    int date;
    int month;
    int year;
};

void storeDate(struct Date *d)
{
    printf("Enter date: ");
    scanf("%d", &d->date);

    printf("Enter month: ");
    scanf("%d", &d->month);

    printf("Enter year: ");
    scanf("%d", &d->year);
}

void displayDate(struct Date d)
{
    printf("Date is %d/%d/%d\n", d.date, d.month, d.year);
}

int main()
{
    struct Date d1;

    storeDate(&d1);
    displayDate(d1);

    return 0;
}