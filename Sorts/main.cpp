#include <iostream>
#include <ctime>
#include "sorts.h"
using namespace std;
void FillArray(int arr[], const int size){
    for (int i = 0; i < size; i++){
        arr[i] = rand()%100;
    } 
}
int main() { //Сортировки всеми возможными приколами

  int n = 10;
  int arr[n];
  FillArray(arr, n);
  // mergesort
  cout << "Original array: ";
  for(int i=0; i<n; i++)
      cout << arr[i] << " ";
  cout << endl;
  mergeSort(arr, 0, n-1);
  cout << "Sorted array(merge): ";
    for(int i=0; i<n; i++)
  cout << arr[i] << " ";
    cout << endl;
  FillArray(arr, n);
  //bubble
  cout << "Original array: ";
  for(int i=0; i<n; i++)
      cout << arr[i] << " ";
  cout << endl;
  bubbleSort(arr, n);
  cout << "Sorted array(bubble): ";
    for(int i=0; i<n; i++)
  cout << arr[i] << " ";
    cout << endl;
  FillArray(arr, n);
  //insert
  cout << "Original array: ";
  for(int i=0; i<n; i++)
      cout << arr[i] << " ";
  cout << endl;
  insertionsort(arr, n);
  cout << "Sorted array(insert): ";
    for(int i=0; i<n; i++)
  cout << arr[i] << " ";
    cout << endl;
  FillArray(arr, n);
  //select
  cout << "Original array: ";
  for(int i=0; i<n; i++)
      cout << arr[i] << " ";
  cout << endl;
  selectionSort(arr, n);
  cout << "Sorted array(selection): ";
    for(int i=0; i<n; i++)
  cout << arr[i] << " ";
    cout << endl;
  FillArray(arr, n);
  //count
  cout << "Original array: ";
  for(int i=0; i<n; i++)
      cout << arr[i] << " ";
  cout << endl;
  countingSort(arr, n);
  cout << "Sorted array(counting): ";
    for(int i=0; i<n; i++)
  cout << arr[i] << " ";
    cout << endl;
    return 0;

  
}

  
