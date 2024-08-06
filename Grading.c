#include <stdio.h>

char calculate_grade(int marks);

int main() {
    int marks;
    char grade;

    printf("Enter the marks (0-100): ");
    scanf("%d", &marks);

    grade = calculate_grade(marks);

    printf("Your grade is: %c\n", grade);

    return 0;
}

char calculate_grade(int marks) {
    if (marks >= 90 && marks <= 100)
        return 'A';
    else if (marks >= 80 && marks < 90)
        return 'B';
    else if (marks >= 70 && marks < 80)
        return 'C';
    else if (marks >= 60 && marks < 70)
        return 'D';
    else if (marks >= 50 && marks < 60)
        return 'E';
    else if (marks >= 0 && marks < 50)
        return 'F';
    else
        return 'I';
}
