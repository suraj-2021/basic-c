#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to display student details
void displayStudent(struct Student s) {
    printf("Student Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student1;

    // Input student details
    printf("Enter student's name: ");
    scanf("%49s", student1.name);
    printf("Enter student's roll number: ");
    scanf("%d", &student1.rollNumber);
    printf("Enter student's marks: ");
    scanf("%f", &student1.marks);

    // Pass the structure to the displayStudent function
    displayStudent(student1);

    return 0;
}
