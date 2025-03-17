#include <stdio.h>
#include "../../array/array.h"

/// @brief Insertion sort works by working iteratively to the right, plaing elements into a sorted
///        subarray to the left, based on relative value.
/// @param array Pointer to array to be sorted
/// @param size Number of items in array (limiation of using C arrays)
/// @param inPlace Wether or not to sort the underlying array or return a newly allocated array
/// @return Pointer to sorted array, may or may not be the original memory location
int *insertionSort(int *array, int size, int inPlace)
{
    int *workingArray = inPlace ? array : createCopy(array, size);
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        while (j >= 0 && workingArray[j] > workingArray[i])
        {
            workingArray[j + 1] = workingArray[j];
            j = j - 1;
        }
        workingArray[j + 1] = workingArray[i];
    }

    return workingArray;
}