//Wrter the code for the brake function here 
#include <stdalign.h>
int main () {
    int brake = 0;
    printf("Enter the brake value: ");
    scanf("%d", &brake);
    if (brake > 0) {
        printf("Braking with intensity: %d\n", brake);
    } else {
        printf("No braking applied.\n");
    }
    
    return 0;
}