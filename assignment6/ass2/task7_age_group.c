#include <stdio.h>

const char *getAgeGroup(int age) {
    if (age < 12) {
        return "Child";
    }
    if (age <= 19) {
        return "Teenager";
    }
    if (age <= 59) {
        return "Adult";
    }
    return "Senior";
}

int main(void) {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Category: %s\n", getAgeGroup(age));

    return 0;
}
