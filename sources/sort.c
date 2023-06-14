#include "../includes/arrayMethodsLib.h"

static void swap(int* el1, int* el2) {
    int tmp = *el1;
    *el1 = *el2;
    *el2 = tmp;
}

static int partition(int* arr, int start, int end)
{
    int pivot = arr[end];
    int pindex = start;

    for(int i = start; i < end; ++i)
    {
        if(arr[i] <= pivot)
        {
            swap(&arr[i], &arr[pindex]);
            ++pindex;
        }
    }
    swap(&arr[pindex], &arr[end]);

    return pindex;
}

// Quick Sort algorithm 
void sort(int* arr, int start, int end) {
    if(start < end)
    {
        int pivot = partition(arr, start, end);
        sort(arr, start, pivot - 1);
        sort(arr, pivot + 1, end);
    }
}
