#include "../includes/arrayMethodsLib.h"

static int isEven(int elem) {
    return !(elem & 1);
}
// we can pass isEven function as some's operation parameter

int some(int* arr, int size, int (*operation)(int)) {
    if (!size) return -1;
    int flag = 0;
    for (int i = 0; i < size; ++i) {
        if (operation(arr[i]))
            flag = 1;
    }
    return flag;
}
