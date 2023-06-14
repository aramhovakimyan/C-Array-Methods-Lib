#include "../includes/arrayMethodsLib.h"

int reduce(int* arr, int size) {
    if (!size) return 0;
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}
