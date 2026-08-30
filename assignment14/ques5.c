#include <stdio.h>

struct SalesManager
{
    int id;
    char name[50];
    float salary;
    float incentive;
    float target;
};

void storeSalesManagers(struct SalesManager sm[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter sales manager %d details\n", i + 1);

        printf("Enter id: ");
        scanf("%d", &sm[i].id);

        printf("Enter name: ");
        scanf("%s", sm[i].name);

        printf("Enter salary: ");
        scanf("%f", &sm[i].salary);

        printf("Enter incentive: ");
        scanf("%f", &sm[i].incentive);

        printf("Enter target: ");
        scanf("%f", &sm[i].target);
    }
}

void displaySalesManagers(struct SalesManager sm[], int size)
{
    printf("\nSales manager details\n");

    for (int i = 0; i < size; i++)
    {
        printf("\nID: %d\n", sm[i].id);
        printf("Name: %s\n", sm[i].name);
        printf("Salary: %.2f\n", sm[i].salary);
        printf("Incentive: %.2f\n", sm[i].incentive);
        printf("Target: %.2f\n", sm[i].target);
        printf("Total salary: %.2f\n", sm[i].salary + sm[i].incentive);
    }
}

int main()
{
    struct SalesManager sm[2];

    storeSalesManagers(sm, 2);
    displaySalesManagers(sm, 2);

    return 0;
}