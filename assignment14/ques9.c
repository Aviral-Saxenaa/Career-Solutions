#include <stdio.h>

typedef struct Complex
{
    float real;
    float imaginary;
} Complex;

void storeComplex(Complex *c)
{
    printf("Enter real part: ");
    scanf("%f", &c->real);

    printf("Enter imaginary part: ");
    scanf("%f", &c->imaginary);
}

void displayComplex(Complex c)
{
    printf("Complex number is %.2f + %.2fi\n", c.real, c.imaginary);
}

int main()
{
    Complex c1;

    storeComplex(&c1);
    displayComplex(c1);

    return 0;
}