#include <stdio.h>
#include "../../array/array.h"

int *selectionSort(int *array, int size, int inPlace)
{
    int *workingArray = inPlace ? array : createCopy(array, size);
    for (int i = 0; i < size - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (workingArray[j] < workingArray[minIdx])
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            workingArray[i] = workingArray[i] + workingArray[minIdx];
            workingArray[minIdx] = workingArray[i] - workingArray[minIdx];
            workingArray[i] = workingArray[i] - workingArray[minIdx];
        }
    }

    return workingArray;
}