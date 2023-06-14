#include "../includes/arrayMethodsLib.h"

int* concat(int *arr1, int * arr2, int size1, int size2) {
    if (!size1 && size2)
        return arr2;
    if (!size2 && size1)
        return arr1;
    if (!size1 && !size2)
        return NULL;

    int *res = (int*)malloc(sizeof(int) * (size1 + size2));
    int k = 0;
    for (int i = 0; i < size1; ++i) {
        res[k] = arr1[i];
        ++k;
    }
    for (int i = 0; i < size2; ++i) {
        res[k] = arr2[i];
        ++k;
    }
    return res;
}
