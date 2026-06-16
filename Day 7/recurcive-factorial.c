#include <stdio.h>

unsigned long long factorial(unsigned int n);

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d = %llu\n", num, factorial((unsigned int)num));
    }

    return 0;
}

unsigned long long factorial(unsigned int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}