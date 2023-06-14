#include "../includes/arrayMethodsLib.h"

int* with(int*arr, int size, int index, int value) {
    if (!size) return NULL;
    if (index < 0 || index >= size) return NULL;
    int *res = (int*)malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i) {
        res[i] = arr[i];
    }
    res[index] = value;
    return res;
}

