//
// Created by Matteo Mazzone on 2022-05-08.
//
#include <stdio.h>

#include "AGGREGATE.h"


int main()
{
    //float arr[] = {3,5,23,67,12,2,-5,1,100};
    //Get float array from user

    int size;
    printf("Size of the array: ");
    scanf("%d", &size);
    float arr[size];
    printf("Created an array of size %lu\n", sizeof(arr) / sizeof(arr[0]));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
        //printf("%f", arr[i]);
    }
    printf("The current array is: ");
    for (int i = 0; i < size; i++) {
        printf("%f ", arr[i]);
    }

    return 0;


}

