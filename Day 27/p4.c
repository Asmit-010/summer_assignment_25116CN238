#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("===== MARKSHEET GENERATION SYSTEM =====\n");

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter marks for 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &m1);

    printf("Subject 2: ");
    scanf("%f", &m2);

    printf("Subject 3: ");
    scanf("%f", &m3);

    printf("Subject 4: ");
    scanf("%f", &m4);

    printf("Subject 5: ");
    scanf("%f", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("\n===== MARKSHEET =====\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", rollNo);

    printf("\nMarks:\n");
    printf("Subject 1 : %.2f\n", m1);
    printf("Subject 2 : %.2f\n", m2);
    printf("Subject 3 : %.2f\n", m3);
    printf("Subject 4 : %.2f\n", m4);
    printf("Subject 5 : %.2f\n", m5);

    printf("\nTotal Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade : A+\n");
    else if (percentage >= 75)
        printf("Grade : A\n");
    else if (percentage >= 60)
        printf("Grade : B\n");
    else if (percentage >= 40)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    return 0;
}