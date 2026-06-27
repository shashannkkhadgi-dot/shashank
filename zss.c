//write a program to find the smallest number among three numbers
#include <stdio.h>
int main() {
    float num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 <= num2 && num1 <= num3) {
        printf("The smallest number is: %.2f\n", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("The smallest number is: %.2f\n", num2);
    } else {
        printf("The smallest number is: %.2f\n", num3);
    }
    return 0;
}