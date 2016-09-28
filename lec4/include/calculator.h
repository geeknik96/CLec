#ifndef CALCULATOR
#define CALCULATOR

float add(float a, float b);

float sub(float a, float b);

float mul(float a, float b);

float div(float a, float b);

int get_operation(char op);

typedef float (*operation)(float, float);

extern operation operations[4];

#endif //CALCULATOR
