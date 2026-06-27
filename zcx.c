 //wirte a program to sort character alphabetically
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], temp;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    
    // Sort the characters in the string
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted string: %s", str);
    
    return 0;}