#include "../includes/arrayMethodsLib.h"

static int isUnit(int elem) {
    return elem >= 0 && elem <= 9;
}
// we can pass isUnit function as every's operation parameter

int every(int* arr, int size, int (*operation)(int)) {
    if (!size) return 0;

    int flag = 1;
    for (int i = 0; i < size; ++i) {
        if (!operation(arr[i]))
            flag = 0;
    }
    return flag;
}
