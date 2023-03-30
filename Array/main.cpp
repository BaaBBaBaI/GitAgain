#include <iostream>
#include "ArrHead.h"
using namespace std;
void FillArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}
void ShowArray(int arr[], int size) {
	cout << "Array = ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	int a[10];
	int aa[3][4] = { {1, 4, 2, 3}, {8, 6, 7, 5}, {9, 11, 10, 12} };
	int aasx = 3;
	int aasy = 4;
	int h = 10;
	FillArray(a, h);
	ShowArray(a, h);
	task1(a, h);
	task2(a, h, false);
	task3(a, h);
	task4(a, h);
	task5(a, h);
	task6(a, h);
	task7(aa, aasx, aasy);

	return 0;
}