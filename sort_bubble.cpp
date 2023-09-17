#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

#define ASIZE 15
using namespace std;

void bubble_sort(int *array)
{
    int size = ASIZE;
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void merge_sort(int *array)
{
}

void prt_graph_arr(int *array)
{
    int prt_arr[ASIZE][ASIZE] = {
        0,
    };
    int maxs_ratio = array[ASIZE - 1] / ASIZE;
    for (int i = ASIZE - 1; i >= 0; i--)
    {
        for (int j = 0; j < ASIZE; j++)
        {
            prt_arr[i][j] = (array[j] / maxs_ratio) - (ASIZE - i);
        }
    }

    for (int i = 0; i < ASIZE; i++)
    {
        for (int j = 0; j < ASIZE; j++)
        {
            if (prt_arr[i][j] > 0)
                printf("%5d", 1);
            else
                printf("     ");
        }
        cout << "\n";
    }
    for (int i = 0; i < ASIZE; i++)
    {
        printf("-----");
    }
    printf("\n");
    for (int i = 0; i < ASIZE; ++i)
    {
        printf("%5d", array[i]);
    }
}

int main()
{
    srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomNumberArray[ASIZE];

    for (int i = 0; i < ASIZE; ++i)
    {
        randomNumberArray[i] = rand() % 1000;
    }
    cout << "-----------------------------초기값-------------------------\n";
    for (int i = 0; i < ASIZE; ++i)
    {
        cout << randomNumberArray[i] << " ";
    }
    cout << "\n------------------------------------------------------------\n";

    bubble_sort(randomNumberArray);
    prt_graph_arr(randomNumberArray);

    return 0;
}
