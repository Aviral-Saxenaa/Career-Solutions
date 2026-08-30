#include <stdio.h>

typedef struct Distance
{
    int feet;
    float inch;
} Distance;

void storeDistance(Distance *d)
{
    printf("Enter feet: ");
    scanf("%d", &d->feet);

    printf("Enter inch: ");
    scanf("%f", &d->inch);
}

void displayDistance(Distance d)
{
    printf("Distance is %d feet %.2f inch\n", d.feet, d.inch);
}

int main()
{
    Distance d1;

    storeDistance(&d1);
    displayDistance(d1);

    return 0;
}