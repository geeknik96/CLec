#include "stdio.h"

int main()
{
    int a = 42;
    int b = 31415;
    int c = 0;

    printf("42 == 42 \t %d\n", 42 == 42);
    printf("43 != 42 \t %d\n", 43 != 42);
    printf("-1 < -100 \t %d\n", -1 < -100);
    printf("100 >= 100  \t %d\n", 100 >= 100);
    printf("5 <= 10 && !(10 >= 100) \t %d\n", 5 <= 10 && !(10 >= 100));
    printf("2016 > -1 || 5 != 5 \t %d\n", 2016 > -1 || 5 != 5);

    return 0;
}
