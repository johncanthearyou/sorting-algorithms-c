#include <stdio.h>
#include "array/array.h"
#include "sort/bubble/bubble.h"
#include "sort/selection/selection.h"
#include "sort/insertion/insertion.h"

char buffer[256];

int main()
{
    int array[10] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9};
    printf("Initial array: %s\n\n", toString(array, 10, buffer));

    int *bubbleSorted = bubbleSort(array, 10, 0);
    printf("Bubble sorted array: %s\n", toString(bubbleSorted, 10, buffer));
    printf("Initial array: %s\n\n", toString(array, 10, buffer));

    int *selectionSorted = selectionSort(array, 10, 0);
    printf("Selection sorted array: %s\n", toString(selectionSorted, 10, buffer));
    printf("Initial array: %s\n\n", toString(array, 10, buffer));

    int *insertionSorted = insertionSort(array, 10, 0);
    printf("Insertion sorted array: %s\n", toString(insertionSorted, 10, buffer));
    printf("Initial array: %s\n\n", toString(array, 10, buffer));
}
