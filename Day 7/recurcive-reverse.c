#include <stdio.h>

int reverseNumber(int num, int reversed) {
    if (num == 0) {
        return reversed;
    }
    
    int lastDigit = num % 10;
    reversed = (reversed * 10) + lastDigit;
    
    return reverseNumber(num / 10, reversed);
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int sign = (number < 0) ? -1 : 1;
    int absNumber = (number < 0) ? -number : number;

    int result = reverseNumber(absNumber, 0) * sign;
    
    printf("Reversed number: %d\n", result);

    return 0;
}