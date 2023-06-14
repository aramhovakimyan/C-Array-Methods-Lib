#include "../includes/arrayMethodsLib.h"

int* slice(int* arr, int size, int start, int end) {
    if (!size || start > end) return NULL;
    int *res = (int*)malloc(sizeof(int) * (end - start + 1));
    int i = 0;
    while (start <= end) {
        res[i] = arr[start];
        ++i;
        ++start;
    }
    return res;
}

