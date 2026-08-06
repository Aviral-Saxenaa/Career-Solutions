#include <stdio.h>

void getAgeGroup(int *age)
{
    if (*age < 12) {
        printf("Child\n");
    } else if (*age <= 19) {
        printf("Teenager\n");
    } else if (*age <= 59) {
        printf("Adult\n");
    } else {
        printf("Senior\n");
    }
}

int main(void)
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Category: ");
    getAgeGroup(&age);

    return 0;
}
