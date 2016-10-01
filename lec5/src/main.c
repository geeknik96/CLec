#include <stdio.h>
#include "Math.h"

int main()
{
    struct Point x = {0, 1};
    print_point(&x);
    printf("\n");
    struct Point y = {5, 10};
    struct Rect rect = { x, y };
    print_rect(&rect);
    printf("\narea = %f", area(&rect));

    //struct Rect rects[4];
    return 0;
}