#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 64
#define EXIT_WITH_ERROR(error) { printf(error "\n"); exit(-1);}

typedef unsigned short ushort;

struct Person {
    char name[MAX_NAME_LEN];
    char surname[MAX_NAME_LEN];
    ushort old;
};

int main()
{
    struct Person *person = NULL;
    person = malloc(sizeof(struct Person));
    if (person == NULL)
        EXIT_WITH_ERROR("memory not alloc");

    const size_t mem_to_alloc = sizeof(struct Person) * 10;
    struct Person *persons = malloc(mem_to_alloc);
    if (persons == NULL)
        EXIT_WITH_ERROR("memory not alloc");

    //mem lick
    return 0;
}