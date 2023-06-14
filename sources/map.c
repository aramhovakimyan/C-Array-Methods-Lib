#include "../includes/arrayMethodsLib.h"

static int multipelByTwo(int elem) {
    return elem *= 2;
}
// we can pass multipelByTwo function as map's operation parameter

int* map(int* arr, int size, int (*operation)(int)) {
    if (!size) return NULL;
    int *res = (int*)malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i) {
        res[i] = operation(arr[i]);
    }
    return res;
}
