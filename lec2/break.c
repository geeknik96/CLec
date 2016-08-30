#include <stdio.h>

int main()
{
    printf("Press \'q\' for exit...\n");
    while (1)
    {
        int symbol = getchar();
        if (symbol == 'q')
            break;
    }
    return 0;
}
