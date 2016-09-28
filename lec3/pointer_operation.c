#include <stdio.h>

int main()
{
    char string[] = "Hello!";
    char *pString = string;

    printf("%s\n", pString);
    printf("%s\n", string);

    printf("pString[2] = %c; *(pString + 2)= %c\n", pString[2], *(pString + 2));
    printf("string[2] = %c; *(string + 2) = %c\n", string[2], *(string + 2));

    printf("sizeof(string) = %lu\n", sizeof(string));
    printf("&string[0] - &pString[6] = %lu", &string[0] - &pString[6]);
}