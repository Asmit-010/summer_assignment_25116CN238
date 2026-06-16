#include <stdio.h>
#include <math.h>

int isArmstrong(int num)
{
    int original = num, remainder, digits = 0;
    int sum = 0;

    // Count digits
    int temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong Number\n", number);
    else
        printf("%d is Not an Armstrong Number\n", number);

    return 0;
}