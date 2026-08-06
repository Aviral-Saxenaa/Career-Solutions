#include <stdio.h>

float calculateTotalSalary(float basic) {
    float da;
    float ta;
    float hra;

    if (basic <= 5000) {
        da = basic * 0.10f;
        ta = basic * 0.20f;
        hra = basic * 0.25f;
    } else {
        da = basic * 0.15f;
        ta = basic * 0.25f;
        hra = basic * 0.30f;
    }

    return basic + da + ta + hra;
}

int main(void) {
    float basic;
    float totalSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    totalSalary = calculateTotalSalary(basic);
    printf("Total salary is %.2f\n", totalSalary);

    return 0;
}
