#include <stdio.h>
#include <assert.h>

void ShiftOneElementLeft (int* data, size_t size);
void PrintfOneMossive(int* data, size_t size);

int main()
{
    int data[6] = {10, 20, 30, 40, 50, 60};

    //printf("kol_el - %d", (int) sizeof (data) / sizeof (data[0]));
    // shift one element left

    ShiftOneElementLeft(data, sizeof (data) / sizeof (data[0]));

    // printf ("%d\n", data[0]);
    // printf ("%d\n", data[1]);
    // printf ("%d\n", data[2]);
    // printf ("%d\n", data[3]);
    // printf ("%d\n", data[4]);
    // printf ("%d\n", data[5]);

    PrintfOneMossive (data, sizeof (data) / sizeof (data[0]));
}

void ShiftOneElementLeft (int* data, size_t size)
{
    for (size_t i = 0; i < size - 1; i ++)
    {
        assert (0 <= i     && i     < size);
        assert (0 <= i + 1 && i + 1 < size);

        data[i] = data[i + 1];
    }
}

void PrintfOneMossive (int* data, size_t size)
{
    for (size_t i = 0; i < size; i ++)
    {
        assert (0 <= i && i < size);

        printf("%d\n", data[i]);
    }
}
