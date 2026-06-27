// write a program to print shapes of circle, square and triangle by using loop and switch case
#include <stdio.h>
int main() {
    int choice, i, j, n;

    printf("Choose a shape to print:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Circle shape:\n");
            for (i = 0; i < 5; i++) {
                for (j = 0; j < 5; j++) {
                    if ((i == 0 || i == 4) && (j > 0 && j < 4)) {
                        printf("*");
                    } else if ((j == 0 || j == 4) && (i > 0 && i < 4)) {
                        printf("*");
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Square shape:\n");
            for (i = 0; i < 5; i++) {
                for (j = 0; j < 5; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;
        case 3:
            printf("Triangle shape:\n");
            for (i = 1; i <= 5; i++) {
                for (j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}