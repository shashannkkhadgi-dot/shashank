//Write a program to find the largest and smallest element in an arrayinput:Array of interger by the user (eg ,{4,2.9.1.5}) output :largest 9 , smallest:1
#include <stdio.h>

int main() {
    int n, largest, smallest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("Largest element in the array is: %d\n", largest);
    printf("Smallest element in the array is: %d\n", smallest);
    return 0;
}