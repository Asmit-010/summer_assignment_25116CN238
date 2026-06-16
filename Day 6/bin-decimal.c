#include <stdio.h>

int main() {
    long long binary;
    long long decimal = 0;
    long long base = 1;
    long long rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary; 

    while (temp > 0) {
        rem = temp % 10;        
        decimal += rem * base;    
        base *= 2;                
        temp /= 10;            
    }

    printf("%lld in binary = %lld in decimal\n", binary, decimal);

    return 0;
}