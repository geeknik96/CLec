#include "stdlib.h"
#include "stdio.h"
#include "time.h"

int main()
{
    int command;
    printf("Enter the command: \n" \
           "1. Say \'Hello, World\'\n" \
           "2. Get current time\n" \
           "3. Get random number\n" \
           "Other key - Exit\n >>> ");

    scanf("%d", &command);

    if (command == 1)
    {
        printf("Hello, World\n");
    }
    else if (command == 2)
    {
        const time_t timer = time(NULL);
        printf("%s\n", ctime(&timer));
    }
    else if (command == 3)
    {
        printf("%d\n", rand() % 2016);
    }
    else
    {
        printf("Exit\n");
    }

    return 0;
}
