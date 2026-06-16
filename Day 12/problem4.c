#include <stdio.h>

int isPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return (sum == num);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfect(number))
        printf("%d is a Perfect Number\n", number);
    else
        printf("%d is Not a Perfect Number\n", number);

    return 0;
}