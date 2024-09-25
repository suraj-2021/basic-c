#include <stdio.h>

// Define a structure to hold student information
struct Student {
    int rollNumber;
    char name[50];
    char address[100];
    char course[50];
};

int main() {

    struct Student students[10];


    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        
        printf("Name: ");
        scanf(" %[^\n]%*c", students[i].name); // To read string with spaces
        
        printf("Address: ");
        scanf(" %[^\n]%*c", students[i].address); // To read string with spaces
        
        printf("Course: ");
        scanf(" %[^\n]%*c", students[i].course); // To read string with spaces
        
        printf("\n");
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Course: %s\n", students[i].course);
        printf("\n");
    }

    return 0;
}
