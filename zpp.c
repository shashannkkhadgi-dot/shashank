// write a program to store string in array and display 5 times.
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string from the user

    printf("The string you entered is: %s", str);
    
    for (int i = 0; i < 5; i++) {
        printf("%s", str); // Display the string 5 times
    }
    return 0;
}