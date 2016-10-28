#include <stdio.h>

int main()
{
    float d1 = 17.24f, d2 = 20;
    float S1, S2, S;
    float pi = 3.1415;

    S1 = pi * d1 * d1 / 4;
    S2 = pi * d2 * d2 / 4;

    S = S2 - S1;
    printf("S = %d mmm\n", (int)S);
    // 80? -> 81

    return 0;
}
