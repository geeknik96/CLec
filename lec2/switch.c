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
    const time_t timer = time(NULL);

    switch (command)
    {
        case 1:
            printf("Hello, World\n");
            break;
        case 2:
            //  const time_t timer = time(NULL);
            printf("%s\n", ctime(&timer));
            break;
        case 3:
            printf("%d\n", rand() % 2016);
            break;
        default:
            break;
    }
    // del break;

    return 0;
}
