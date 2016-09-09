#include <stdio.h>

int main()
{
    int A[5] = {5, 1, 3, 6};

    int *pA = A;
    printf("%d %d\n", A, pA);
    printf("%d %d\n", *A, *pA);

    return 0;
}
