#include <stdio.h>
#include <string.h>

struct Book {
    char title[30];
    char author[30];
    int publicationYear;
    char ISBN[13];
    float price;
};  // Added semicolon here

int main() {
    struct Book book1 = {"Introduction to C Programming", "John Smith", 2022, "9780131103627", 49.99};
    printf("%s %s %d %s %.2f\n", book1.title, book1.author, book1.publicationYear, book1.ISBN, book1.price);
    return 0;
}
