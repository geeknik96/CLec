#include <stdio.h>

int main()
{
    char str[] = { 'H', 'e', 'l', 'l', 'o', '!', '\0' } ;
    printf(str);
    printf("\n");


    char str2[] = "Hello!";
    printf(str2);
    printf("\nsizeof(str2) == %d\n", sizeof(str));

    return 0;
}
