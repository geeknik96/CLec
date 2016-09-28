#include <stdio.h>

#define ULL unsigned long long

int compare(int a, int b)
{
    if (a == b) return 0;
    return a < b ? -1 : 1;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int *array, int size, int (*cmp)(int, int))
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = size - 1; j > i; --j)
        {
            if (cmp(array[i], array[j]) > 0)
                swap(array + i, array + j);
        }
    }
}

int main(int argc, char **argv)
{
    int array[] = {4,1,2,5,1,14,0,-1,-5,-2,2,6,1,2};
    sort(array, sizeof(array)/ sizeof(*array), compare);
    for (int i = 0; i < sizeof(array) / sizeof(*array); ++i)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}