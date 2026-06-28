#include <stdio.h>
#include <string.h>

int main() {
    char names[100][50], temp[50];
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);

    getchar(); 

    printf("Enter names:\n");
    for (i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);

    names[i][strcspn(names[i], "\n")] = '\0';
    }

    for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
     if (strcmp(names[i], names[j]) > 0) {
     strcpy(temp, names[i]);
     strcpy(names[i], names[j]);
     strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}