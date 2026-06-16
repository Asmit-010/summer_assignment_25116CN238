#include <stdio.h>

int main() {
    int start, end, i;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("\nNumbers from %d to %d are:\n", start, end);

    for(i = start; i <= end; i++) {
        printf("%d ", i);
    }
    
    printf("\n"); 
    return 0;
}