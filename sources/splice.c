#include "../includes/arrayMethodsLib.h"

void splice(int* arr, int size, int index, int replace, int value) {
    if (!arr || !size) return ;
    if (index < 0 || index >= size) return ;
    if (replace) {
        arr[index] = value;
    } else {
        
    }

}
