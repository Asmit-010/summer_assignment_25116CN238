#include <stdio.h>

int main() {
    int arr[100], n, i;
    int choice, value, position;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Array Elements: ");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 2:
            printf("Enter position and value: ");
            scanf("%d %d", &position, &value);

            if (position >= 1 && position <= n + 1) {
                for (i = n; i >= position; i--) {
                    arr[i] = arr[i - 1];
                }

                arr[position - 1] = value;
                n++;

                printf("Element inserted successfully.\n");
            } else {
                printf("Invalid position.\n");
            }
            break;

        case 3:
            printf("Enter position to delete: ");
            scanf("%d", &position);

            if (position >= 1 && position <= n) {
                for (i = position - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                n--;

                printf("Element deleted successfully.\n");
            } else {
                printf("Invalid position.\n");
            }
            break;

        case 4:
            printf("Enter value to search: ");
            scanf("%d", &value);

            for (i = 0; i < n; i++) {
                if (arr[i] == value) {
                    printf("Element found at position %d\n",
                           i + 1);
                    break;
                }
            }

            if (i == n)
                printf("Element not found.\n");

            break;

        case 5:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}