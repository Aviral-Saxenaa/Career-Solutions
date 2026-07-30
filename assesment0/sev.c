// min into hours
#include <stdio.h>

int main()
{
    int minutes = 125;
    int hours = minutes / 60;
    int leftmin = minutes % 60;
    printf("Hours: %d\n", hours);
    printf("Remaining minutes: %d\n", leftmin);
    return 0;
}