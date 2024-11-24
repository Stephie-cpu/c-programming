
#include <stdio.h>
#include <string.h>

// Define the structure
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Initialize the structure variable
    struct employee emp = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    // Print the values of the fields
    printf("%s%d%s%.2f%s",emp.name,emp.id,emp.department,emp.salary,emp.email);

    return 0;
}
