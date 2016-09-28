#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
int get_operation(char op);

int main()
{
    float (*operations[4])(float, float) = {
            add, sub, mul, div
    };

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

int get_operation(char op)
{
    switch (op)
    {
        case '+':
            return 0;
        case '-':
            return 1;
        case '*':
            return 2;
        case '/':
            return 3;
        default:
            return -1;
    }
}

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}