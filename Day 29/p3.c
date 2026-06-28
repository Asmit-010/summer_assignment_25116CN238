#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Reverse String\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {

        case 1:
            printf("Length of string: %lu\n",
                   strlen(str));
            break;

        case 2:
            strcpy(temp, str);
            printf("Copied String: %s\n", temp);
            break;

        case 3:
            printf("Enter another string: ");
            fgets(temp, sizeof(temp), stdin);

            temp[strcspn(temp, "\n")] = '\0';

            strcat(str, temp);

            printf("Concatenated String: %s\n", str);
            break;

        case 4: {
            int i, len = strlen(str);

            for (i = 0; i < len / 2; i++) {
                char ch = str[i];
                str[i] = str[len - i - 1];
                str[len - i - 1] = ch;
            }

            printf("Reversed String: %s\n", str);
            break;
        }

        case 5:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}