#include <stdlib.h>
#include <stdio.h>
#include "../../array/array.h"

int *bubbleSort(int *array, int size, int inPlace)
{
    int *workingArray = inPlace ? array : createCopy(array, size);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (workingArray[i] > workingArray[j])
            {
                workingArray[i] = workingArray[i] + workingArray[j];
                workingArray[j] = workingArray[i] - workingArray[j];
                workingArray[i] = workingArray[i] - workingArray[j];
            }
        }
    }

    return workingArray;
}