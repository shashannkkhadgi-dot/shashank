//write a program to read a text file and count the number of words in itinput: text file output: number of words in the file word in it input:a text file (sample.txt )containing some text (eg , "Cprogramming is fun ")output total words: 4
#include <stdio.h>
#include <stdlib.h> 
int main() {
    FILE *file;
    char filename[100];
    char word[100];
    int count = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Could not open file");
        return EXIT_FAILURE;
    }

    while (fscanf(file, "%s", word) == 1) {
        count++;
    }

    fclose(file);
    
    printf("Total words: %d\n", count);
    
    return EXIT_SUCCESS;
}