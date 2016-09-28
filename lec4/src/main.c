#include <stdio.h>
#include "calculator.h"

int main()
{
    while (1)
    {
        char op;
        float a, b;
        printf("<calc> ");
        scanf("%f %c %f", &a, &op, &b);

        const int operation = get_operation(op);
        const float result = operations[operation](a, b);
        printf("%f\n", result);
    }
}