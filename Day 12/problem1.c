#include <stdio.h>

int isPalindrome(int num)
{
    int original = num;
    int reverse = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    return (original == reverse);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a Palindrome Number\n", number);
    else
        printf("%d is Not a Palindrome Number\n", number);

    return 0;
} 