#include "stdio.h"

int main()
{
    int n = 5;

    if (n != 0)
    {
        printf("n not equal 0\n");
    }

    if (n % 2 == 1)
    {
        printf("n is odd\n");
    }
    else
    {
        printf("n is even\n");
    }


    if (n < 5)
        if (n > 0)
            n = 100;
    else
         n = 0;

    printf("n = %d\n", n);
}
