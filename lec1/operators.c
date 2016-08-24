#include <stdio.h>

//TODO: % - double, float?

int main()
{
    int whole = 11 / 5, modulo = 11 % 5;
    printf("11 / 5 = %d (%d)\n", whole, modulo);

    float div = 11.0f / 5.0f;
    printf("11 / 5 = %f", div);

    int counter = 1;
    counter = counter + 1;
    counter += 1;
    printf("%d\n", counter);

    int i = 0;
    i++;
    ++i;
    printf("i = %d\n", i);
    printf("i = %d\n", i--);
    printf("i = %d\n", --i);
    printf("i = %d\n", i);

    return 0;
}
