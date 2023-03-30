#include <iostream>
#include <array>
#include "ArrHead.h"

using namespace std;
// 1:
// Написать функцию, которая вернёт индекс максимального / минимального элемента в массиве размера N.
// task 1 >>
void task1(int *ar, int size) {

	int max = 0;
	int min = ar[0];
	for (int i = 0; i <= size - 1; i++) {
		if (ar[i] > max) {
			max = ar[i];
		}
		if (ar[i] < min) {
			min = ar[i];
		}
	}
	cout << "Maximum and minimum are: " << max << " " << min << endl;
}

// 2:
// Вывод на экран только чётных (нечётных) чисел массива (чётность проверять с помощью битовых операций).
// task 2 >>
void task2(int arr[], int n, bool isEven) {
	for (int i = 0; i < n; i++) {
		if ((arr[i] & 1) == (isEven ? 0 : 1)) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;
}

// 3:
// Написать функцию вывода на экран элементов массива по столбцам и строкам.
// task 3 >>
void task3(int *ar, int size) {
	int z;
	for (int i = 0; i < size; i++) {
		cout << ar[i] << " ";
	} 
	cout << endl;
	for (int z = 0; z < size; z++) {
		cout << ar[z] << endl;
	}
}
// 4:
// Вывести среднее значение суммы элементов массива.
// task 4 >>
void task4(int* ar, int size) {
	int z = 0;
	for (int i = 0; i < size; i++) {
		z = z + ar[i];
	}
	int zet = z / size;
	cout << "middle is " << zet << endl;
}
// 5:
// Удалить из массива повторяющиеся элементы, уменьшить размер массива. (Для корректной работы в функцию должен быть передан динамический массив, и указатель на размер массива).
// task 5 >>
void task5(int* ar, int size) {
	int a = size;
	for (int i = 0; i < a; i++) {
		for (int j = i + 1; j < a; j++) {
			if (ar[i] == ar[j]) {
				for (int k = j; k < a - 1; k++) {
					ar[k] = ar[k + 1];
				}
				a--;
				j--;
			}
		}
	}
	for (int g = 0; g < a; g++) {
		cout << ar[g] << " ";
	}
	cout << endl;
}
// 6:
// Определить есть ли в массиве одинаковые элементы. Если есть функция должна вернуть true, если нет – false.
// task 6 >>
void task6(int* ar, int size) {
	int a = size;
	bool k = false;
	for (int i = 0; i < a; i++) {
		for (int j = i + 1; j < a; j++) {
			if (ar[i] == ar[j]) {
				k = true;
			}
		}
	}
	if (k) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	
}
// 7:
// Написать функцию сортировки двумерного массива (сортировать можно любым известным алгоритмом).
// task7 >>
void task7(int arr[3][4], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			for (int k = 0; k < rows; k++) {
				for (int l = 0; l < cols; l++) {
					if (arr[i][j] < arr[k][l]) {
						int temp = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = temp;
					}
				}
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


