#include <stdio.h>

int simple_counter()
{
    int counter = 0;
    return ++counter;
}

int static_counter()
{
    static int counter = 0;
    return ++counter;
}

int main()
{
    printf("simple_counter() == %d\n", simple_counter());
    printf("simple_counter() == %d\n", simple_counter());
    printf("simple_counter() == %d\n", simple_counter());
    printf("static_counter() == %d\n", static_counter());
    printf("static_counter() == %d\n", static_counter());
    printf("static_counter() == %d\n", static_counter());
}