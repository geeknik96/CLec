#include "calculator.h"

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

float (*operations[4])(float, float) = {
        add, sub, mul, div
};
