#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0;
    printf("Enter a 3-digit integer: ");
    scanf("%d", &num);

    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        rem = originalNum % 10;
        sum += rem * rem * rem;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}