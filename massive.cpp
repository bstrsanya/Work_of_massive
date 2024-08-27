#include <stdio.h>
#include <assert.h>

const int eof = -1;
const int dob = 10;

void ShiftOneElementLeft (int* data, size_t size);

void PrintfOneMossive (int* data, size_t size);

void EachPlusConst (int* data_2);

int main()
{
    int data[6] = {10, 20, 30, 40, 50, 60};

    int data_2[6] = {100, 200, 300, 400, 500, -1};

    ShiftOneElementLeft (data, sizeof (data) / sizeof (data[0]));
    PrintfOneMossive (data, sizeof (data) / sizeof (data[0]));

    EachPlusConst (data_2);
    PrintfOneMossive (data_2, sizeof (data_2) / sizeof (data_2[0]));


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

void EachPlusConst (int* data_2)
{
    size_t i = 0;
    while (data_2[i] != eof)
    {
        data_2[i] += dob;
        i++;
    }
}