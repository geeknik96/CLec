#include <stdio.h>

int main()
{
    int fans[] = { 1000, 1200, 900, 1100, 1000 };

    for (int i = 0; i < 5; i++) {
        printf("%d RPM\n", fans[i]);
    }

    return 0;
}
