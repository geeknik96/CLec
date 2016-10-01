#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(10 * sizeof(int));
    p[10] = 2016;

    return 0;
}