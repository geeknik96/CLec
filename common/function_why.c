#include <stdio.h>
#include <math.h>

float triangle_area(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    float for_sqrt = p * (p - a) * (p - b) * (p - c);
    return sqrtf(for_sqrt);
}

int main()
{
    float a1 = 1, b1 = 4, c1 = 2;
    float a2 = 8, b2 = 3, c2 = 6;
    float a3 = 5, b3 = 1, c3 = 2;

    float area = triangle_area(a1, b1, c1);
    printf("%f\n", area);

    printf("%f\n", triangle_area(a2, b2, c2));

    printf("%f\n", triangle_area(a3, b3, c3));

//    float p1 = (a1 + b1 + c1) / 2;
//    float for_sqrt1 = p1 * (p1 - a1) * (p1 - b1) * (p1 - c1);
//    float area1 = sqrt(for_sqrt1);
//    printf("%f\n", area1);
//
//    float p2 = (a2 + b2 + c2) / 2;
//    float for_sqrt2 = p2 * (p2 - a2) * (p2 - b2) * (p2 - c2);
//    float area2 = sqrt(for_sqrt2);
//    printf("%f\n", area2);

//    float p3 = (a3 + b3 + c3) / 2;
//    float for_sqrt3 = p3 * (p3 - a3) * (p3 - b3) * (p3 - c3);
//    float area3 = sqrt(for_sqrt3);
//    printf("%f\n", area3);

    return 0;
}
