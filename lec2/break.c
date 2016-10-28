#include <stdio.h>

int main()
{
    printf("Press ('q\') %%for exit...\n");
    for(;;)
    {
        while (1) {
            int symbol = getchar();

            if (symbol == 'q')
                break;
            else if (symbol == '\n')
                continue;
            printf("hw!\n");
        }

    }
    return 0;
}
