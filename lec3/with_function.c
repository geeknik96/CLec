#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, int size);

void fill_random_value(int *array, int size);

void reverse_array(int *array, int size);

void swap(int *a, int *b);

int get_random()
{
    return rand() % 100;
}

int main()
{
    int array[10];

    fill_random_value(array, 10);
    print_array(array, 10);

    reverse_array(array, 10);
    print_array(array, 10);

    return 0;
}

void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

void fill_random_value(int *array, int size)
{
    for (int i = 0; i < size; i++)
        array[i] = get_random();
}

void reverse_array(int *array, int size)
{
    for (int i = 0; i < size / 2; i++)
        swap(array + i, array + 2 * i);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}