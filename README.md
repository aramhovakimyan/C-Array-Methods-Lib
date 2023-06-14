
# CArrayMethodsLib

CArrayMethodsLib is a lightweight library that provides various useful methods for manipulating C arrays. It offers a set of functions for performing common array operations such as filling, iteration, sorting, concatenation, filtering, mapping, and more.

## Installation

To use CArrayMethodsLib, follow these steps:

1.  Download the CArrayMethodsLib source code from the [GitHub repository](https://github.com/your-username/CArrayMethodsLib).
2.  Include the necessary header files and source files in your C project.
3.  Compile your project with the CArrayMethodsLib source files.

## Methods

CArrayMethodsLib provides the following methods:

-   `fill(int* arr, int size, int value, int start, int end)`: Fills a C array with a specific value within a given range.
-   `forEach(int* arr, int size, void (*operation)(int*))`: Executes a custom operation on each element of the array.
-   `sort(int* arr, int start, int end)`: Sorts a portion of the array in ascending order.
-   `splice(int* arr, int size, int index, int replace, int value)`: Inserts or replaces elements in the array at a specific index.
-   `concat(int *arr1, int *arr2, int size1, int size2)`: Concatenates two arrays into a new array.
-   `filter(int* arr, int size, int (*operation)(int))`: Creates a new array containing elements that pass a specific condition.
-   `map(int* arr, int size, int (*operation)(int))`: Creates a new array by applying a custom operation to each element of the original array.
-   `with(int* arr, int size, int index, int value)`: Inserts an element at a specific index in the array.
-   `slice(int* arr, int size, int start, int end)`: Extracts a portion of the array into a new array.
-   `reverse(int* arr, int size)`: Reverses the order of the elements in the array.
-   `every(int* arr, int size, int (*operation)(int))`: Checks if all elements satisfy a specific condition.
-   `find(int* arr, int size, int target)`: Finds the first occurrence of a target value in the array.
-   `findIndex(int* arr, int size, int target)`: Finds the index of the first occurrence of a target value in the array.
-   `includes(int* arr, int size, int target)`: Checks if the array includes a specific value.
-   `indexOf(int* arr, int size, int target)`: Finds the first index of a specific value in the array.
-   `lastIndexOf(int* arr, int size, int target)`: Finds the last index of a specific value in the array.
-   `reduce(int* arr, int size)`: Reduces the array to a single value using a custom operation.
-   `some(int* arr, int size, int (*operation)(int))`: Checks if at least one element satisfies a specific condition.

## Usage

To use the CArrayMethodsLib functions, include the necessary headers in your C code and link against the library. You can just run this in terminal:
`make` 
It create static library `CArrayMethodsLib.a`, which you can link with your project and use library's functions.