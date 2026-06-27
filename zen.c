// write a program that prompts the userto input two floating point number and calculates addition, subtraction, multiplication and division of the two numbers
#include <stdio.h>

int main() {
    float num1, num2, sum, difference, product, quotient;

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}