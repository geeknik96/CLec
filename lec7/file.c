#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = NULL;
    file = fopen("/Users/nikitas/Projects/CLec/lec7/file.txt", "r");

    if (file == NULL) {
        printf("cannot open file!");
        return -1;
    }

    int num_array = 0;
    fscanf(file, "%d", &num_array);

    int *array = (int *)malloc(sizeof(int) * num_array);
    for (int i = 0; i < num_array; i++)
    {
        fscanf(file, "%d", array + i);
    }

    fprintf(stdout, "Read array: \n");
    for (int i = 0; i < num_array; i++)
    {
        fprintf(stdout, "%d ", array[i]);
    }
    fprintf(stdout, "\n");

    fclose(file);
    free(array);

    return 0;
}