#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total_marks;
    float percentage;

    // marks for five subjects
    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);

    printf("Enter marks for Subject 4: ");
    scanf("%f", &subject4);

    printf("Enter marks for Subject 5: ");
    scanf("%f", &subject5);

    // Calculate total marks
    total_marks = subject1 + subject2 + subject3 + subject4 + subject5;

    // Calculate percentage 
    percentage = (total_marks / 500.0) * 100;

    // the results
    printf("\nTotal Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}