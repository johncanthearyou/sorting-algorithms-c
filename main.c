#include <stdio.h>
#include "array/array.c"
#include "sort/bubble.c"
#include "sort/selection.c"
#include "sort/insertion.c"

char buffer[256];

typedef int *(*SortFunction)(int *, int, int);

void doSort(const char *sortName, SortFunction sortFunc, int *array, int size)
{
    int *sorted = sortFunc(array, size, 0);
    printf("%s sorted array: %s\n", sortName, toString(sorted, size, buffer));
    printf("Initial array: %s\n\n", toString(array, size, buffer));
    free(sorted);
}

int main()
{
    int array[10] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9};

    printf("Initial array: %s\n\n", toString(array, 10, buffer));
    doSort("Bubble", bubbleSort, array, 10);
    doSort("Selection", selectionSort, array, 10);
    doSort("Insertion", insertionSort, array, 10);

    return 0;
}
