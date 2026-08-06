#include <stdio.h>

const char *getResultClass(int marks) {
    if (marks > 75) {
        return "Distinction";
    }
    if (marks > 65) {
        return "First Class";
    }
    if (marks > 55) {
        return "Second Class";
    }
    if (marks >= 40) {
        return "Pass Class";
    }
    return "Fail";
}

int main(void) {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Result: %s\n", getResultClass(marks));

    return 0;
}
