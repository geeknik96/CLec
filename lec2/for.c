#include <stdio.h>

int main()
{
    for (double i = 0; i < 10; i++)
    {
        printf("%f ", i);
    }

    printf("\n");

    for (int i = 9; i >= 0; i--)
        printf("%d ", i);

    printf("\n");

    return 0;
}
