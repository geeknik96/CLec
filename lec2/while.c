#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }

    printf("\n");

    int num = 12345678;
    int sum = 0;

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("sum = %d\n", sum);

    return 0;
}