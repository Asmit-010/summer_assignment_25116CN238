#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int count = 0;

void addStudent() {
    printf("Enter Roll Number: ");
    scanf("%d", &roll[count]);

    getchar();

    printf("Enter Student Name: ");
    fgets(name[count], sizeof(name[count]), stdin);
    name[count][strcspn(name[count], "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%f", &marks[count]);

    count++;

    printf("Student added successfully.\n");
}

void displayStudents() {
    int i;

    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\n===== STUDENT RECORDS =====\n");

    for (i = 0; i < count; i++) {
        printf("\nRoll No : %d\n", roll[i]);
        printf("Name    : %s\n", name[i]);
        printf("Marks   : %.2f\n", marks[i]);
    }
}

void searchStudent() {
    int search, i;

    printf("Enter Roll Number: ");
    scanf("%d", &search);

    for (i = 0; i < count; i++) {
        if (roll[i] == search) {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            return;
        }
    }

    printf("Student not found.\n");
}

void averageMarks() {
    int i;
    float sum = 0;

    if (count == 0) {
        printf("No records available.\n");
        return;
    }

    for (i = 0; i < count; i++) {
        sum += marks[i];
    }

    printf("Average Marks = %.2f\n",
           sum / count);
}

int main() {
    int choice;

    do {
        printf("\n===== MINI PROJECT =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Average Marks\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            averageMarks();
            break;

        case 5:
            printf("Program Ended.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}