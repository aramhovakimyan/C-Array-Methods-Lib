#include "../includes/arrayMethodsLib.h"

void fill(int* arr, int size, int value, int start, int end) {
    if (!size || start > end) return;
    if (start < 0 || end > size - 1) return;
    for (int i = start; i <= end; ++i) {
        arr[i] = value;
    }
}

