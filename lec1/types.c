#include <stdio.h>

//TODO: var decl, unsigned, signed, void

int main()
{
    char symbol = 'a';
    int five = 0x05;
    short int difference = -150;
    long big_num = 123456789l;
    float temperatureF = 36.6f;
    double temperatureD = 36.6;

//    float eps = 1.0e-5;

    printf("symbol = %c\n", symbol);
    printf("five = %d\n", five);
    printf("difference = %d\n", difference);
    printf("big_num = %ld\n", big_num);
    printf("temperatureF = %f\n", temperatureF);
    printf("temperatureD = %f\n", temperatureD);


    return 0;
}
