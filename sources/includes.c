#include "../includes/arrayMethodsLib.h"

int includes(int* arr, int size, int target) {
    if (!size) return -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] = target)
            return 1;
    }
    return 0;
}

