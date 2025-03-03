#include <stdio.h>

int main() {
    char studentName[4];
    int rollNumber;
    float math, science, english;
    float average;
    char grade;

    // Input student details and marks
    printf("Enter student name: ");
    scanf("%s", studentName);
    printf("Enter roll number: ");
    scanf("%d", &rollNumber);
    printf("Enter Math marks: ");
    scanf("%f", &math);
    printf("Enter Science marks: ");
    scanf("%f", &science);
    printf("Enter English marks: ");
    scanf("%f", &english);

    // Calculate average
    average = (math + science + english) / 3;

    // Determine grade
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Output student details, marks, average, and grade
    printf("\nStudent Name: %s\n", studentName);
    printf("Roll Number: %d\n", rollNumber);
    printf("Math Marks: %.2f\n", math);
    printf("Science Marks: %.2f\n", science);
    printf("English Marks: %.2f\n", english);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
