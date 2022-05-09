#include "AGGREGATE.h"

float minf(float* arr, int size) {
    float smallestFloat = arr[0];

    for (int i = 1; i < size; i++){
        if(arr[i]< smallestFloat){
            smallestFloat = arr[i];
        }
    }
    return smallestFloat;
}

float maxf(float* arr, int size){
    float biggestFloat = arr[0];

    for (int i = 1; i < size; i++){
        if(arr[i] > biggestFloat){
            biggestFloat = arr[i];
        }
    }
    return biggestFloat;
}

float sumf(float* arr, int size) {
    float sum = 0;

    for (int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

float avgf(float* arr, int size) {

    return sumf(arr, size)/size;
}

float pseudo_avgf(float* arr, int size) {
    return (maxf(arr, size) + minf(arr, size))/2;
}