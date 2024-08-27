#include <stdio.h>
#include <assert.h>

const int eof = -1;
const int dob = 10;

void ShiftOneElementLeft (int* data, size_t size);

void PrintfOneMossive (int* data, size_t size);

void EachPlusConst (int* data_2);

void PrintTwoMossive (int* data, size_t nStolb, size_t nStrock);

int main()
{
    int data[6] = {10, 20, 30, 40, 50, 60};

    int data_2[6] = {100, 200, 300, 400, 500, -1};

    int data_bin[][6] = {{10, 11, 12, 13, 14, 15}, // int* data[] -> int* data
                         {20, 21, 22, 23, 24, 25},
                         {30, 31, 32, 33, 34, 35},
                         {40, 41, 42, 43, 44, 45}};
    
    //data_bin = (int*)data_bin;
    

    PrintTwoMossive ((int*) data_bin, sizeof (data_bin[0]) / sizeof (data_bin[0][0]), sizeof (data_bin) / sizeof (data_bin[0]));

    //ShiftOneElementLeft (data, sizeof (data) / sizeof (data[0]));
    //PrintfOneMossive (data, sizeof (data) / sizeof (data[0]));

    //EachPlusConst (data_2);
    //PrintfOneMossive (data_2, sizeof (data_2) / sizeof (data_2[0]));
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

void PrintTwoMossive (int* data, size_t nStolb, size_t nStrock)
{
    for (size_t y = 0; y < nStrock; y++)
        {
        for (size_t x = 0; x < nStolb; x++)
            printf("%d ", *((int*) data + y * nStolb + x));
        printf ("\n");
        }
}
