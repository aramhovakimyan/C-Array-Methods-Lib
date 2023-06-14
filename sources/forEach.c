#include "../includes/arrayMethodsLib.h"

static void multipelByTwo(int* elem) {
    *elem *= 2;
}
// we can pass multipelByTwo function as forEach's operation parameter

void forEach(int* arr, int size, void (*operation)(int*)) {
    if (!size) return ;
    for (int i = 0; i < size; ++i) {
        operation(&arr[i]);
    }
}
