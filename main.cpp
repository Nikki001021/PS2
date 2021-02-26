#include <stdio.h>
#include "ps2.h"
#include "ps2.c"

int main() {
    //2.1.1 Testing
    printf("2.1.1 Testing...\n");
    int Array1[] = {72,90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int* Array1_p = Array1;
    int Array1length = sizeof Array1 / sizeof *Array1;
    int largest1, smallest1;
    largest1 = smallest1 = Array1[0];
    int* largest1_p = &largest1;
    int* smallest1_p = &smallest1;
    large_and_small(Array1_p, Array1length, largest1_p, smallest1_p);
    printf("Largest number: %d\nSmallest number: %d\n", *largest1_p, *smallest1_p);
    printf("\n");

    //2.1.2 Testing
    printf("2.1.2 Testing...\n");
    int Array2[] = {-72,-90,-100,-36,-21,-15,-76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int* Array2_p = Array2;
    int Array2length = sizeof Array2 / sizeof *Array2;
    int largest2, smallest2;
    largest2 = smallest2 = Array2[0];
    int* largest2_p = &largest2;
    int* smallest2_p = &smallest2;
    large_and_small(Array2_p, Array2length, largest2_p, smallest2_p);
    printf("Largest: %i\nSmallest: %i\n", *largest2_p, *smallest2_p);
    printf("\n");

    //2.2 Testing
    printf("2.2.1 Testing...\n");
    double leftArray1[] = {15.26, 28.20, 6.71, 72.22, 92.85, 15.50, 85.64, 57.41, 44.40, 72.91};
    double rightArray1[] = {9.17, 4.8, 10.9, 10.12, 17.18, 3.9, 6.19, 5.4, 3.13, 6.1};
    double* leftArray1_p = leftArray1;
    double* rightArray1_p = rightArray1;
    int left1length = sizeof leftArray1 / sizeof *leftArray1;
    int right1length = sizeof rightArray1 / sizeof *rightArray1;
    if (left1length != right1length) {
        printf("Error! The length of left array does not equal to the length of right array!");
    }
    else {
        printf("Result: %lf\n", inner_product(leftArray1_p, rightArray1_p, left1length));
    }
    printf("\n");

    //2.3.1 Testing
    printf("2.3.1 Testing...\n");
    int leftArray2[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int rightArray2[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,18,16,27,47,0,23};
    int* leftArray2_p = leftArray2;
    int* rightArray2_p = rightArray2;
    int left2length = sizeof leftArray2 / sizeof *leftArray2;
    int right2length = sizeof rightArray2 / sizeof *rightArray2;
    if (compareArrays(leftArray2_p, left2length, rightArray2_p, right2length))
        printf("true\n");
    else
        printf("false\n");
    printf("\n");

    //2.3.2 Testing
    printf("2.3.2 Testing...\n");
    int leftArray3[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int rightArray3[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,18,16,27,47,23};
    int* leftArray3_p = leftArray3;
    int* rightArray3_p = rightArray3;
    int left3length = sizeof leftArray3 / sizeof *leftArray3;
    int right3length = sizeof rightArray3 / sizeof *rightArray3;
    if (compareArrays(leftArray3_p, left3length, rightArray3_p, right3length))
        printf("true\n");
    else
        printf("false\n");
    printf("\n");
}
