#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int temp[k];

    k = k % n;

    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for (int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter positions to rotate right: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after right rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}