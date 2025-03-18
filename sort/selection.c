#include <stdio.h>

/// @brief Seletion sort works by iteratively finding the nth smallest element in and swapping
///        with the nth smallest value until the array is sorted.
/// @param array Pointer to array to be sorted
/// @param size Number of items in array (limiation of using C arrays)
/// @param inPlace Wether or not to sort the underlying array or return a newly allocated array
/// @return Pointer to sorted array, may or may not be the original memory location
int *selectionSort(int *array, int size, int inPlace)
{
    int *workingArray = inPlace ? array : createCopy(array, size);
    for (int i = 0; i < size - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < size; j++)
            if (workingArray[j] < workingArray[minIdx])
                minIdx = j;
        if (minIdx != i)
            swapValues(workingArray, i, minIdx);
    }

    return workingArray;
}