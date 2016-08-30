#include <stdio.h>

int main()
{
    printf("Press \'q\' for exit...\n");
    while (1)
    {
        int symbol = getchar();
        if (symbol == 'q')
            goto exit;
    }
exit:
    return 0;
}
