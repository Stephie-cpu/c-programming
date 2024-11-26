include <stdio.h>

int main() {
    FILE *fptr;
    char paragraph[200];

    // Prompt the user to enter a paragraph
    printf("Enter a paragraph (up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);  // Reading from stdin

    /
    fptr = fopen("output.txt", "w");

    // Check if the file was successfully opened
    if (fptr == NULL) {
        printf("Error: File could not be created.\n");
        return 1;  // Return with error code
    }

    // Write the paragraph to the file
    fprintf(fptr, "%s", paragraph);

    // Close the file
    fclose(fptr);

    // Print success message
    printf("File 'output.txt' has been created and the paragraph has been written successfully.\n");

    // Reading from the file
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error: File could not be opened for reading.\n");
        return 1;  // Return with error code
    }

    // Clear the paragraph array before reading
    memset(paragraph, 0, sizeof(paragraph));

    
    fgets(paragraph, sizeof(paragraph), fptr);

    // Print the paragraph  read from the file
    printf("The content of the file is: %s", paragraph);

    // Close the file
    fclose(fptr);

    return 0;
}
