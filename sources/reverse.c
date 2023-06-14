#include "../includes/arrayMethodsLib.h"

int* reverse(int* arr, int size) {
    if (!size) return NULL;
    int *res = (int*)malloc(sizeof(int) * size);
    for (int i = size - 1, k = 0; i >= 0; --i, ++k) {
        res[k] = arr[i];
    }
    return res;
}
