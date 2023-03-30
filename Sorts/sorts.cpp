#include <iostream>
#include <vector>
#include "sorts.h"
using namespace std;
void bubbleSort(int arr[], int n) { //Сортировка пузырем
  int temp;
  for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - i - 1; j++) {
      if(arr[j] > arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

void insertionsort(int *ar, int size) { //Сортировка вставками
    for (int i = 1; i < size; i++) {
        int key = ar[i];
        int j = i - 1;
        while (j >= 0 && ar[j] > key) {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = key;

    }
   

}

void selectionSort(int arr[], int n) { //Сортировка выбором
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void merge(int arr[], int l, int m, int r) { //Мержа
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(int i=0; i<n1; i++)
        L[i] = arr[l + i];
    for(int j=0; j<n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) { //Сиквел мержи
    if(l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void countingSort(int arr[], const int size){ //
    int sizeSecArr = arr[0];
    int temp;
    for (int i = 1; i < size; i++){
        if (sizeSecArr < arr[i]){
            sizeSecArr = arr[i];
        }
    }
    sizeSecArr++;
    int ar[sizeSecArr];
    for (int i = 0; i < sizeSecArr; i++){
        ar[i] = 0;
    }
    for (int i = 0; i < size; i++){
        temp = arr[i];
        ar[temp] = ar[temp] + 1;
    }
    int a[size];
    int h = 0;
    for (int i = 0; i < sizeSecArr; i++){
        if(ar[i] != 0){
            for (int z = 0; z < ar[i]; z++){
                a[h] = i;
                h++;
            }
        }
    }
    
    for (int i = 0; i < size; i++){
        arr[i] = a[i];
    }
}
