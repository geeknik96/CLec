#ifndef CALCULATOR
#define CALCULATOR

float add(float a, float b);

float sub(float a, float b);

float mul(float a, float b);

float div(float a, float b);

int get_operation(char op);

extern float (*operations[4])(float, float);


#endif //CALCULATOR
