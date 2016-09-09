#include <stdio.h>

int main()
{
    int num = 42;
    printf("num = %d\n", num);
    printf("&num = %d\n", &num);

    int *pNum = &num;
    printf("pNum = %d\n", pNum);
    printf("*pNum = %d\n", *pNum);
    printf("&pNum = %d\n", &pNum);

    return 0;
}
