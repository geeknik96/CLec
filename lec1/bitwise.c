#include <stdio.h>

int main()
{
                              // in bit
    unsigned char flags = 0;  // 0000 0000
    flags = flags | 2;        // 0000 0010
    flags |= 8;               // 0000 1010

    printf("2 | 8 = %d\n", flags);

    unsigned char isActive = (flags >> 3) & 1;
    printf("Bit #4 = %d\n", isActive);
    // 0000 1010 >> 3
    // 0000 0001 & 1

    flags ^= flags; // fast 'flags = 0;'
    printf("flags = %d\n", flags);

    printf("157 * 2 = %d ---- 157 << 1 = %d", 157 * 2, 157 << 1);
    printf("1050 / 4 = %d ---- 1050 >> 2 = %d", 1050 / 4, 1050 >> 2);

    return 0;
}
