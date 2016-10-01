#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main()
{
    struct Point A = {1, 5};
    A.x = 4;
    A.y = 4;
    // A = {4, 4};

    struct Point *pA = &A;
    pA->x = 2;
    pA->y = 2;

    return 0;
}