#include <stdlib.h>
#include <stdio.h>
#include "../../array/array.h"

/// @brief Bubble sort makes repeated passes through an array, comparing adjacent elements and
///        swapping if in improper order. This is repeated until no swaps are made, in which case the array is sorted.
/// @param array Pointer to array to be sorted
/// @param size Number of items in array (limiation of using C arrays)
/// @param inPlace Wether or not to sort the underlying array or return a newly allocated array
/// @return Pointer to sorted array, may or may not be the original memory location
int *bubbleSort(int *array, int size, int inPlace)
{
    int *workingArray = inPlace ? array : createCopy(array, size);
    int swapped;

    for (int i = 0; i < size - 1; i++)
    {
        swapped = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (workingArray[j] > workingArray[j + 1])
            {
                swapValues(workingArray, j, j + 1);
                swapped = 1;
            }
        }
        if (swapped == 0)
            return workingArray;
    }

    return 0;
}
