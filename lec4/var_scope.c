#include <stdio.h>

int i;

int main()
{
    printf("i = %d\n", i);

    int i = 255;

    for (int i = 0; i < 3; ++i)
    {
        printf("%d ", i);
    }

    {
        int i = 150;
        printf("\ni = %d\n", i);
    }

    printf("%d\n", i);
    return 0;
}