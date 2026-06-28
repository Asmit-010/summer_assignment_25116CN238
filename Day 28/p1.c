#include <stdio.h>
#include <string.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Book books[100];
    int n = 0, choice, i, searchId;

    do {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &books[n].bookId);

            getchar();

            printf("Enter Book Title: ");
            fgets(books[n].title, sizeof(books[n].title), stdin);

            printf("Enter Author Name: ");
            fgets(books[n].author, sizeof(books[n].author), stdin);

            books[n].title[strcspn(books[n].title, "\n")] = '\0';
            books[n].author[strcspn(books[n].author, "\n")] = '\0';

            n++;
            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No books available.\n");
            } else {
                printf("\n===== BOOK LIST =====\n");

                for (i = 0; i < n; i++) {
                    printf("\nBook ID : %d\n", books[i].bookId);
                    printf("Title   : %s\n", books[i].title);
                    printf("Author  : %s\n", books[i].author);
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++) {
                if (books[i].bookId == searchId) {
                    printf("\nBook Found:\n");
                    printf("Book ID : %d\n", books[i].bookId);
                    printf("Title   : %s\n", books[i].title);
                    printf("Author  : %s\n", books[i].author);
                    break;
                }
            }

            if (i == n)
                printf("Book not found.\n");

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