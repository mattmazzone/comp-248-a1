//
// Created by Matteo Mazzone on 2022-05-08.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "AGGREGATE.h"
#include "LINKEDLIST.h"

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

    float (*aggregates[5])(float* arr, int size) = { &minf, &maxf, &sumf, &avgf,&pseudo_avgf};

    srand(time(0));   // Initialization, should only be called once.


    float arr1[10];
    float arr2[20];

    // Max random number of 100
    const int maxRand = 101;

    for (size_t i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++){
        if (i < sizeof(arr1)/sizeof(arr1[0])){
            arr1[i] = (float)(rand() % maxRand);
            arr2[i] = (float)(rand() % maxRand);
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

/*
    // Question 5

    // Allocate memory
    list arr = malloc(6*sizeof(struct _listnode));

    // Initialize nodes
    list n1 = &arr[0], n2 =  &arr[1], n3 = &arr[2], n4 = &arr[3], n5 = &arr[4], n6 = &arr[5];

    // Define Atoms
    atom aAtom = 'a';
    atom bAtom = 'b';
    atom cAtom = 'c';
    atom dAtom = 'd';
    atom eAtom = 'e';

    //
    element el = lasel(n1);

    // Assign values to nodes
    n1->el = aasel(aAtom);
    lasel(n2);                      // INNER LIST
    n3->el = aasel(bAtom);
    n4->el = aasel(cAtom);
    n5->el = aasel(dAtom);
    n6->el = aasel(eAtom);

    // Links between nodes
    n1->next = n2;
    n2->el.l = n3;
    n3->next = n4;
    n4->next = NIL.l;
    n2->next = n5;
    n5->next = n6;
    n6->next = NIL.l;

    // Question 7 Output
    print(el);
    printf("\n");
    printf("%c", car(el).a);
    printf("\n");
    print(lasel(cdr(el)));
    printf("\n");
    print(car(car(el)));

    // Free allocated memory
    lfreer(arr);
*/
}

