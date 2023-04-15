#include <iostream>
#include "realize.h"
using namespace std;

void FillArray(int arr[], const int N){
    for (int i = 0; i < N; i++){
        arr[i] = rand()%20;
        cout << arr[i] << " ";
    }
    cout << endl;
}

int ShowMin(int arr[], int size, int index, int min){
    if(index == size) return min;
    if(min > arr[index]){
        min = arr[index];
        min = ShowMin(arr, size, index+1, min);
    }
    else{
        min = ShowMin(arr, size, index+1, min);
        
    }
}

int ShowMax(int arr[], int size, int index, int max){
    if(index == size) return max;
    if(max < arr[index]){
        max = arr[index];
        max = ShowMax(arr, size, index+1, max);
    }
    else {
        max = ShowMax(arr, size, index+1, max);
    }
    return max;
}