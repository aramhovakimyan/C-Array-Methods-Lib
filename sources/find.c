#include "../includes/arrayMethodsLib.h"

int find(int* arr, int size, int target) {
    if (!size) return -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target)
            return arr[i];
    }
    return -1;
}
