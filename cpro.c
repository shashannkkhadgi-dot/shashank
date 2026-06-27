//write a program to display the Fibonacci seires up  n terms, where n is entered by the userinput n=6 output: 0 1 1 2 3 5      
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    return 0;
}