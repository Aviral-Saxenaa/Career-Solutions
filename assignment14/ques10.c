#include <stdio.h>

typedef struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
} Product;

void storeProducts(Product product[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter product %d details\n", i + 1);

        printf("Enter id: ");
        scanf("%d", &product[i].id);

        printf("Enter name: ");
        scanf("%s", product[i].name);

        printf("Enter quantity: ");
        scanf("%d", &product[i].quantity);

        printf("Enter price: ");
        scanf("%f", &product[i].price);
    }
}

void displayProducts(Product product[], int size)
{
    printf("\nProduct details\n");

    for (int i = 0; i < size; i++)
    {
        printf("\nID: %d\n", product[i].id);
        printf("Name: %s\n", product[i].name);
        printf("Quantity: %d\n", product[i].quantity);
        printf("Price: %.2f\n", product[i].price);
        printf("Total value: %.2f\n", product[i].quantity * product[i].price);
    }
}

int main()
{
    Product product[3];

    storeProducts(product, 3);
    displayProducts(product, 3);

    return 0;
}