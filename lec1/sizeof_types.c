#include <stdio.h>
#include <stdbool.h>

//TODO: unsigned

int main()
{
    printf("sizeof(char) = %lu byte\n", sizeof(char));
    printf("sizeof(short) = %lu bytes\n", sizeof(short));
    printf("sizeof(int) = %lu bytes\n", sizeof(int));
    printf("sizeof(long) = %lu bytes\n", sizeof(long));
    printf("------------------------\n");
    printf("sizeof(float) = %lu bytes\n", sizeof(float));
    printf("sizeof(double) = %lu bytes\n", sizeof(double));
    printf("sizeof(long double) = %lu bytes\n", sizeof(long double));

    true;

    return 0;
}
