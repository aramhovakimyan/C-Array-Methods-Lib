#include "../includes/arrayMethodsLib.h"

static int isEven(int elem) {
    return !(elem & 1);
}
// we can pass isEven function for filter's operation argument

int* filter(int* arr, int size, int (*operation)(int)) {
    if (!size) return NULL;
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (operation(arr[i]))
            ++count;
    }
    int *res = (int*)malloc(sizeof(int) * count);
    for (int i = 0, k = 0; i < size; ++i) {
        if (operation(arr[i])) {
            res[k] = arr[i];
            ++k;
        }
    }
    return res;
}
