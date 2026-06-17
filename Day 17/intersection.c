#include <stdio.h>

int main() {
    int a[50], b[50], intersection[50];
    int n1, n2, i, j, k = 0, found;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++) {
      found = 0;

    for(j = 0; j < n2; j++) {
     if(a[i] == b[j]) {
       found = 1;
       break;
       }
     }

     if(found) {
     int duplicate = 0;

     for(j = 0; j < k; j++) {
     if(intersection[j] == a[i]) {
     duplicate = 1;
     break;
                      
    }    }

  if(!duplicate) {
      intersection[k++] = a[i];   }
 }
 }

    printf("Intersection of arrays: ");
    for(i = 0; i < k; i++) {
        printf("%d ", intersection[i]);
    }

    return 0;
}