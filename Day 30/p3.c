#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i, searchId;

    do {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            getchar();

            printf("Enter Employee Name: ");
            fgets(emp[n].name,
                  sizeof(emp[n].name),
                  stdin);

            emp[n].name[
                strcspn(emp[n].name, "\n")] = '\0';

            printf("Enter Salary: ");
            scanf("%f", &emp[n].salary);

            n++;

            printf("Employee added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No employee records available.\n");
            } else {
                printf("\n===== EMPLOYEE LIST =====\n");

                for (i = 0; i < n; i++) {
                    printf("\nID     : %d\n",
                           emp[i].id);

                    printf("Name   : %s\n",
                           emp[i].name);

                    printf("Salary : %.2f\n",
                           emp[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++) {
                if (emp[i].id == searchId) {
                    printf("\nEmployee Found:\n");
                    printf("ID     : %d\n",
                           emp[i].id);

                    printf("Name   : %s\n",
                           emp[i].name);

                    printf("Salary : %.2f\n",
                           emp[i].salary);

                    break;
                }
            }

            if (i == n)
                printf("Employee not found.\n");

            break;

        case 4:
            printf("Enter Employee ID: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++) {
                if (emp[i].id == searchId) {

                    printf("Enter New Salary: ");
                    scanf("%f",
                          &emp[i].salary);

                    printf("Salary updated successfully.\n");
                    break;
                }
            }

            if (i == n)
                printf("Employee not found.\n");

            break;

        case 5:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}