//
// Created by Nikki Li on 2/27/21.
//

#include "ps2.h"
void large_and_small(const int* array, int length, int* largest, int* smallest) {
    if (length == 0) {
        return;
    }
    else {
        for (int counter = 1; counter < length; counter++) {
            if (*largest < *array) {
                *largest = *array;
            }
            else if (*smallest > *array) {
                *smallest = *array;
            }
            ++array;
        }
    }
}

double inner_product(const double* leftArray, const double* right_array, int length){
    double result = 0;
    for (int counter = 0; counter < length; counter++) {
        result += ((*leftArray) * (*right_array));
        ++leftArray;
        ++right_array;
    }
    return result;
}

bool compareArrays(int* left, int left_length, int* right, int right_length) {
    if (left_length != right_length) {
        return false;
    }
    else {
        for (int counter = 0; counter < left_length; counter++) {
            if (*left != *right) {
                return false;
            }
        }
    }
    return true;
}