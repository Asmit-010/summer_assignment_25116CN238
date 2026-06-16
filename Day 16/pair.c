#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    int found = 0;

    for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == sum) {
      printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
        found = 1;
   }
    }
    }

    if (!found) {
        printf("No pair found.\n");
    }

    return 0;
}