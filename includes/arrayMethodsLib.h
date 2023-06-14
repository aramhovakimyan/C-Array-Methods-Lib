#ifndef ARRAY_METHODS_LIB_H
#define ARRAY_METHODS_LIB_H

#include <stdlib.h>

void    fill(int* arr, int size, int value, int start, int end);
void    forEach(int* arr, int size, void (*operation)(int*));
void    sort(int* arr, int start, int end);
void    splice(int* arr, int size, int index, int replace, int value);
int*    concat(int *arr1, int * arr2, int size1, int size2);
int*    filter(int* arr, int size, int (*operation)(int));
int*    map(int* arr, int size, int (*operation)(int));
int*    with(int*arr, int size, int index, int value);
int*    slice(int* arr, int size, int start, int end);
int*    reverse(int* arr, int size);
int     every(int* arr, int size, int (*operation)(int));
int     find(int* arr, int size, int target);
int     findIndex(int* arr, int size, int target);
int     includes(int* arr, int size, int target);
int     indexOf(int* arr, int size, int target);
int     lastIndexOf(int* arr, int size, int target);
int     reduce(int* arr, int size);
int     some(int* arr, int size, int (*operation)(int));

#endif