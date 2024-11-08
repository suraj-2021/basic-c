#include <stdio.h>
#include <string.h>

// Define a structure to hold student details
struct Student {
    int rollNumber;
    char name[50];
    float marks1, marks2, marks3, marks4;
    char grade;
};

// Function to calculate grade based on average marks
char calculateGrade(float avg) {
    if (avg >= 75) return 'A';
    else if (avg >= 60) return 'B';
    else if (avg >= 50) return 'C';
    else if (avg >= 40) return 'D';
    else return 'E';
}

// Function to input student details
struct Student inputStudentDetails() {
    struct Student student;

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter Name: ");
    getchar(); // To consume the leftover newline character
    fgets(student.name, sizeof(student.name), stdin);
    // Remove newline character from name if present
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Enter Marks for Subject 1: ");
    scanf("%f", &student.marks1);

    printf("Enter Marks for Subject 2: ");
    scanf("%f", &student.marks2);

    printf("Enter Marks for Subject 3: ");
    scanf("%f", &student.marks3);

    printf("Enter Marks for Subject 4: ");
    scanf("%f", &student.marks4);

    // Calculate average marks
    float avg = (student.marks1 + student.marks2 + student.marks3 + student.marks4) / 4.0;

    // Determine grade based on average marks
    student.grade = calculateGrade(avg);

    return student;
}

// Function to display student details
void displayStudentDetails(struct Student student) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks 1: %.2f\n", student.marks1);
    printf("Marks 2: %.2f\n", student.marks2);
    printf("Marks 3: %.2f\n", student.marks3);
    printf("Marks 4: %.2f\n", student.marks4);
    printf("Grade: %c\n", student.grade);
}

// Function to search for a student by roll number
void searchStudentByRollNumber(struct Student students[], int n, int rollNumber) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == rollNumber) {
            displayStudentDetails(students[i]);
            return;
        }
    }
    printf("No student found with Roll Number: %d\n", rollNumber);
}

int main() {
    int n, rollNumber;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input details for all students
    for (int i = 0; i < n; i++) {
        printf("\nEntering details for student %d:\n", i + 1);
        students[i] = inputStudentDetails();
    }

    // Search for a student by Roll Number
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &rollNumber);

    searchStudentByRollNumber(students, n, rollNumber);

    return 0;
}
