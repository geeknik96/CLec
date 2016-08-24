#include <stdio.h>

int main()
{
    unsigned number = 2016;

    for (unsigned del = 1; del <= number / 2; del++)
    {
        if (del % 3 == 0)
            continue;

        if (number % del == 0)
            printf("%d ", del);
    }

    printf("\n");

    return 0;
}
