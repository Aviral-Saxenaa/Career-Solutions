#include <stdio.h>

typedef struct Product
{
    char name[50];
    float price;
    int quantity;
} Product;

void storeProduct(Product p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter product %d details\n", i + 1);

        printf("Enter name: ");
        scanf("%s", p[i].name);

        printf("Enter price: ");
        scanf("%f", &p[i].price);

        printf("Enter quantity: ");
        scanf("%d", &p[i].quantity);
    }
}

void displayCart(Product p[], int size)
{
    float total = 0;

    printf("\nCart details\n");

    for (int i = 0; i < size; i++)
    {
        printf("\nProduct: %s\n", p[i].name);
        printf("Price: %.2f\n", p[i].price);
        printf("Quantity: %d\n", p[i].quantity);

        total = total + p[i].price * p[i].quantity;
    }

    printf("\nTotal cost: %.2f\n", total);
}

int main()
{
    int size;

    printf("Enter number of products: ");
    scanf("%d", &size);

    Product cart[size];

    storeProduct(cart, size);
    displayCart(cart, size);

    return 0;
}