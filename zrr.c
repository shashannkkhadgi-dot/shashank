//write a program that demonstrates pre increment and post increment operators
#include <stdio.h>
int main() {
    int a , b ;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    // Post-increment
    printf("Post-increment (a++): %d\n", a++); // Outputs 5, then a becomes 6

    // Pre-increment
    printf("Pre-increment (++b): %d\n", ++b); // b becomes 6, then outputs 6

    return 0;
}