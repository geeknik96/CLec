#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[10];
    const int size = sizeof(nums) / sizeof(*nums);

    for (int i = 0; i < size; i++)
    {
        nums[i] = rand() % 100;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    for (int i = 0; i < size / 2; i++)
    {
        int temp = nums[i];
        nums[i] = nums[2 * i];
        nums[2 * i] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}