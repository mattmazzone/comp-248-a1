//
// Created by Matteo Mazzone on 2022-05-08.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "AGGREGATE.h"


int main() {
    // QUESTION 3
    /*

    // Get desired array size from user
    int size = 0;
    printf("Size of the array: ");
    scanf("%d", &size);
    if (size < 0) {
        fprintf(stderr, "FATAL ERROR IN LINE " "%d.", __LINE__);
        return 0;
    }
    // Create array
    float arr[size];
    printf("Created an array of size %lu\n", sizeof(arr) / sizeof(arr[0]));
    // Get elements in array from user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
        //printf("%f", arr[i]);
    }
    // Print array
    printf("The current array is: ");
    for (int i = 0; i < size; i++) {
        printf("%f ", arr[i]);
    }

    printf("\nThe min function returns: %f\n", minf(arr, size));
    printf("The max function returns: %f\n", maxf(arr, size));
    printf("The sum function returns: %f\n", sumf(arr, size));
    printf("The avg function returns: %f\n", avgf(arr, size));
    printf("The pseudo_avg function returns: %f\n", pseudo_avgf(arr, size));

    return 0;
     */

    // QUESTION 4
    /*
    float (*aggregates[5])(float* arr, int size) = { &minf, &maxf, &sumf, &avgf,&pseudo_avgf};

    srand(time(NULL));   // Initialization, should only be called once.
    int r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.

    float arr1[10];
    float arr2[20];

    // Max random number of 100
    const int maxRand = 101;

    for (size_t i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++){
        if (i < sizeof(arr1)/sizeof(arr1[0])){
            arr1[i] = rand() % maxRand;
            arr2[i] = rand() % maxRand;
        }
        else{
            arr2[i] = rand() % maxRand;
        }
    }
    printf("Content of array 1: \n");
    for (size_t i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
        printf("%f ", arr1[i]);
    }
    printf("\nContent of array 2: \n");
    for (size_t i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++) {
        printf("%f ", arr2[i]);
    }

    printf("\n\nIterate through array of function pointers for array of 10 random floats: \n");
    for (size_t i = 0; i < sizeof(aggregates)/sizeof aggregates[0]; i++){
        printf("%f\n", aggregates[i](arr1, sizeof(arr1)/sizeof(arr1[0])));
    }

    printf("\n\nIterate through array of function pointers for array of 20 random floats: \n");
    for (size_t i = 0; i < sizeof(aggregates)/sizeof aggregates[0]; i++){
        printf("%f\n", aggregates[i](arr2, sizeof(arr2)/sizeof(arr2[0])));
    }
     */


    typedef enum { ATOM, LIST } eltype;
    typedef char atom;
    struct _listnode;

    typedef struct {
        eltype type;
        union {
            atom a;
            struct _listnode* l;
        };
    } element;

    typedef struct _listnode {
        element el;
        struct _listnode* next;
    } * list;
    const element NIL = { .type=LIST, .l=NULL };


}

