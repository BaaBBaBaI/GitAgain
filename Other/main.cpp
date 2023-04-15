#include <iostream>
#include "realize.h"
using namespace std;

int main()
{
    int size = 10;
    int arr[size];
    int min, max;
    FillArray(arr, size);
    min = ShowMin(arr, size, 0, arr[0]);
    cout << min << endl;
    max = ShowMax(arr, size, 0, arr[0]);
    cout << max << endl;
return 0;
}