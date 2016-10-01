#include <stdio.h>

//union Color {
//    struct {
//        char r;
//        char b;
//        char g;
//    };
//    char color[3];
//};

int main()
{
    union Number {
        int inum;
        float fnum;
    } number;
    number.inum = 5;
    printf("%i %f\n", number.inum, number.fnum);
    number.fnum = 5.0;
    printf("%i %f\n", number.inum, number.fnum);

    return 0;
}