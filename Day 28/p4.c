#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int n = 0, choice, i;
    char searchName[50];

    do {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar(); 

        switch (choice) {

        case 1:
            printf("Enter Name: ");
            fgets(contacts[n].name,
                  sizeof(contacts[n].name),
                  stdin);

            printf("Enter Phone Number: ");
            fgets(contacts[n].phone,
                  sizeof(contacts[n].phone),
                  stdin);

            contacts[n].name[
                strcspn(contacts[n].name, "\n")] = '\0';

            contacts[n].phone[
                strcspn(contacts[n].phone, "\n")] = '\0';

            n++;

            printf("Contact added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No contacts available.\n");
            } else {
                printf("\n===== CONTACT LIST =====\n");

                for (i = 0; i < n; i++) {
                    printf("\nName : %s\n",
                           contacts[i].name);

                    printf("Phone: %s\n",
                           contacts[i].phone);
                }
            }
            break;

        case 3:
            printf("Enter name to search: ");
            fgets(searchName,
                  sizeof(searchName),
                  stdin);

            searchName[
                strcspn(searchName, "\n")] = '\0';

            for (i = 0; i < n; i++) {
                if (strcmp(contacts[i].name,
                           searchName) == 0) {

                    printf("\nContact Found:\n");
                    printf("Name : %s\n",
                           contacts[i].name);

                    printf("Phone: %s\n",
                           contacts[i].phone);

                    break;
                }
            }

            if (i == n)
                printf("Contact not found.\n");

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