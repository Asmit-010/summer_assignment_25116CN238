#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary, bonus, totalSalary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i;

    do {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee Salary Details\n");
        printf("2. Display Salary Records\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basicSalary);

            printf("Enter Bonus: ");
            scanf("%f", &emp[n].bonus);

            emp[n].totalSalary =
                emp[n].basicSalary + emp[n].bonus;

            n++;

            printf("Salary record added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No salary records available.\n");
            } else {
                printf("\n===== Salary Records =====\n");

                for (i = 0; i < n; i++) {
                    printf("\nEmployee ID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nBasic Salary: %.2f", emp[i].basicSalary);
                    printf("\nBonus: %.2f", emp[i].bonus);
                    printf("\nTotal Salary: %.2f\n",
                           emp[i].totalSalary);
                }
            }
            break;

        case 3:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}