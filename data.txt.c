#include <stdio.h>

int main() {
    FILE *fptr;
    char sentence[100];

    // Prompt the user to enter a sentence
    printf("Enter a sentence (up to 100 words): ");
    fgets(sentence, sizeof(sentence), stdin);  // Reading from stdin

    // Create a file on your computer (filename.txt)
    fptr = fopen("data.txt", "w");

    // Check if the file was successfully opened
    if (fptr == NULL) {
        printf("Error: File could not be created.\n");
        return 1;  // Return with error code
    }

    // Write the sentence to the file
    fprintf(fptr, "%s", sentence);

    // Close the file
    fclose(fptr);

    // Print success message
    printf("File 'data.txt' has been created and the sentence has been written successfully.\n");

    // Reading from the file
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error: File could not be opened for reading.\n");
        return 1;  // Return with error code
    }

    // Clear the sentence array before reading
    memset(sentence, 0, sizeof(sentence));

    // Read the sentence from the file
    fgets(sentence, sizeof(sentence), fptr);

    // Print the sentence read from the file
    printf("The content of the file is: %s", sentence);

    // Close the file
    fclose(fptr);

    return 0;
}
