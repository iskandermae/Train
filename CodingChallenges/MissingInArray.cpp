#include "MissingInArray.h"

/* 
[Original Task](https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&sortBy=submissions)
You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n(inclusive).
This array represents a permutation of the integers from 1 to n with one element missing. 
Your task is to identify and return the missing element. 
*/

int MissingInArray::missingNum(int* arr, int size)
{
    for (int i = 1; i <= size + 1; i++) { //run through numbers 1 to n 
        bool found = false;
        for (int j = 0; j < size; j++) { //run through the array
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            return i;
        }
    }
    return -1;
}
