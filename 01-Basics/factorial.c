
#include <stdio.h>

int main(void)
{
    int n, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Please enter a number from 0 to 20.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("Factorial = %d\n", fact);
    }

    return 0;
}

