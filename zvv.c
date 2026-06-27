// write a progream to count student who works are between 60 and 80.
#include <stdio.h>
int main() {
    int marks, count = 0;
    printf("Enter the number of students: ");
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks);
        
        if (marks >= 60 && marks <= 80) {
            count++;
        }
    }
    
    printf("Number of students with marks between 60 and 80: %d\n", count);
    
    return 0;
}