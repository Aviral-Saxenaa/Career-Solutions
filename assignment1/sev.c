
#include <stdio.h>

int main()
{
    float basic, da, ta, hra, total_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    if (basic <= 5000)
    {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
    }
    else
    {
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
    }

    total_salary = basic + da + ta + hra;

    printf("Total Salary: %f\n", total_salary);

    return 0;
}