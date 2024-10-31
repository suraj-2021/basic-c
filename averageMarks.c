#include <stdio.h>

#define SUBJECTS 5
#define STUDENTS 5

// Define structure for Student
struct Student {
    char name[50];
    int marks[SUBJECTS];
    int total;
    float average;
    char grade;
};

// Function to calculate total, average and grade
void calculate(struct Student *student) {
    student->total = 0;

    // Calculate total marks
    for (int i = 0; i < SUBJECTS; i++) {
        student->total += student->marks[i];
    }

    // Calculate average
    student->average = (float)student->total / SUBJECTS;

    // Determine grade
    if (student->average >= 90)
        student->grade = 'A';
    else if (student->average >= 75)
        student->grade = 'B';
    else if (student->average >= 50)
        student->grade = 'C';
    else
        student->grade = 'D';
}

// Main function
int main() {
    struct Student students[STUDENTS];

    // Input details for each student
    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter marks for %d subjects:\n", SUBJECTS);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }

        // Calculate total, average and grade
        calculate(&students[i]);
    }

    // Display results
    printf("\n%-20s %-10s %-10s %-10s\n", "Name", "Total", "Average", "Grade");
    printf("-----------------------------------------------------------\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%-20s %-10d %-10.2f %-10c\n", students[i].name, students[i].total, students[i].average, students[i].grade);
    }

    return 0;
}
