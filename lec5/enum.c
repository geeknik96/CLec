#include <stdio.h>

enum State {
    UP,
    DOWN,
    LEFT,
    RIGHT,
    ERROR = -1
};

enum Type {
    INT,
    FLOAT,
    STRING
};

struct Number
{
    enum Type type;
    union {
        int inum;
        float fnum;
        char *string;
    } val;
};

void print_number(struct Number * number)
{
    switch (number->type)
    {
        case FLOAT:
            printf("%f", number->val.fnum);
            break;
        case INT:
            printf("%d", number->val.inum);
            break;
        case STRING:
            printf("%s", number->val.string);
    }
}

int main()
{
    int current_state = LEFT;
    printf("LEFT = %d\n", LEFT);

    struct Number number;
    number.type = FLOAT;
    number.val.fnum = 2.17;

    print_number(&number);

    return 0;
}