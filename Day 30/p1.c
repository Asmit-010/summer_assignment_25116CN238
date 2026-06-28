#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], marks[100];
    char name[100][50];
    int n = 0, choice, i, searchRoll;

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar();

        switch (choice) {

        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &roll[n]);

            getchar();

            printf("Enter Student Name: ");
            fgets(name[n], sizeof(name[n]), stdin);

            name[n][strcspn(name[n], "\n")] = '\0';

            printf("Enter Marks: ");
            scanf("%d", &marks[n]);

            n++;

            printf("Student record added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No student records available.\n");
            } else {
                printf("\n===== STUDENT RECORDS =====\n");

                for (i = 0; i < n; i++) {
                    printf("\nRoll No : %d\n", roll[i]);
                    printf("Name    : %s\n", name[i]);
                    printf("Marks   : %d\n", marks[i]);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to search: ");
            scanf("%d", &searchRoll);

            for (i = 0; i < n; i++) {
                if (roll[i] == searchRoll) {
                    printf("\nStudent Found:\n");
                    printf("Roll No : %d\n", roll[i]);
                    printf("Name    : %s\n", name[i]);
                    printf("Marks   : %d\n", marks[i]);
                    break;
                }
            }

            if (i == n)
                printf("Student not found.\n");

            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}