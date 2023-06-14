#include "../includes/arrayMethodsLib.h"

int lastIndexOf(int* arr, int size, int target) {
    for (int i = size - 1; i >= 0; --i) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
