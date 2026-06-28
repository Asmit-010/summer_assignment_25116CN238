#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    int available;
};

int main() {
    struct Book books[100];
    int n = 0, choice, i, searchId;

    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &books[n].id);

            getchar();

            printf("Enter Book Title: ");
            fgets(books[n].title,
                  sizeof(books[n].title),
                  stdin);

            books[n].title[
                strcspn(books[n].title, "\n")] = '\0';

            books[n].available = 1;

            n++;

            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No books available.\n");
            } else {
                printf("\n===== BOOK LIST =====\n");

                for (i = 0; i < n; i++) {
                    printf("\nBook ID : %d\n",
                           books[i].id);

                    printf("Title   : %s\n",
                           books[i].title);

                    printf("Status  : %s\n",
                           books[i].available
                           ? "Available"
                           : "Issued");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to issue: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++) {
                if (books[i].id == searchId) {

                    if (books[i].available) {
                        books[i].available = 0;
                        printf("Book issued successfully.\n");
                    } else {
                        printf("Book already issued.\n");
                    }

                    break;
                }
            }

            if (i == n)
                printf("Book not found.\n");

            break;

        case 4:
            printf("Enter Book ID to return: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++) {
                if (books[i].id == searchId) {

                    if (!books[i].available) {
                        books[i].available = 1;
                        printf("Book returned successfully.\n");
                    } else {
                        printf("Book is already available.\n");
                    }

                    break;
                }
            }

            if (i == n)
                printf("Book not found.\n");

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