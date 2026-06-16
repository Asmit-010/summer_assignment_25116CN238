#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int i, j, k;
    int isAlreadyPrinted;
    int foundDuplicate = 0;

    printf("Duplicate elements in the array: ");

    for (i = 0; i < size; i++) {
        isAlreadyPrinted = 0;
        for (k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                isAlreadyPrinted = 1;
                break;
            }
        }
        if (isAlreadyPrinted) {
            continue;
        }

        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                foundDuplicate = 1;
                break; 
            }
        }
    }

    if (!foundDuplicate) {
        printf("None");
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 2, 7, 2, 8, 2, 3, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    findDuplicates(arr, size);

    return 0;
}
