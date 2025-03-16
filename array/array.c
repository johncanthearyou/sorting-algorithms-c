#include <stdio.h>
#include <stdlib.h>

char *toString(int *array, int size, char *buffer)
{
    int stringLen = 0;
    stringLen += sprintf(buffer + stringLen, "{ ");
    for (int i = 0; i < size - 1; i++)
    {
        stringLen += sprintf(buffer + stringLen, "%d, ", array[i]);
    }
    stringLen += sprintf(buffer + stringLen, "%d }", array[size - 1]);

    return buffer;
}

int *createCopy(int *array, int size)
{
    int *copy = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        copy[i] = array[i];
    }

    return copy;
}

void swapValues(int *array, int index1, int index2)
{
    array[index1] = array[index1] + array[index2];
    array[index2] = array[index1] - array[index2];
    array[index1] = array[index1] - array[index2];
}