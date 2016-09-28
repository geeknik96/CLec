#include <stdio.h>

int factorial(int n) //range ?
{
    int result = 1;
    while(n > 0)
    {
        result *= n;
        --n;
    }
    return result; // remove return result; ?
}

int main()
{
    int fact = factorial(5);

    printf("factorial(5) == %d\n", fact);
    return 0;
}