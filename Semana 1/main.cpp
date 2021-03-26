#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

void generateData(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 51;
	}
}

void printData(int* arr, int n) {
	cout << "Index\t" << "Value\t" << endl;
	for (int i = 0; i < n; i++) {
		cout << i << "\t" << arr[i] << "\t" << endl;
	}
}

void eraseMultiplesOfThree(int* &arr, int &n) {
	int count = 0;
	int* aux;
	aux = new int[n];

	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 != 0) {
			aux[count] = arr[i];
			count++;
		}
	}

	arr = aux;
	n = count;
}

void bubbleSort(int* arr, int n) {
	int aux;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				//Swap
				aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
			}
		}
	}
}

void insertNumber(int* &arr, int &n, int value) {
	n++;
	arr[n - 1] = value;
	bubbleSort(arr, n);
}

//int sum(int a, int b) {
//	a += 2;
//	b += 5;
//	return a + b;
//}
//
//int sum2(int &a, int &b) {
//	a += 2;
//	b += 5;
//	return a + b;
//}

int main() {
	srand(time(NULL));
	int* pointer; //declaracion
	int n = 10;
	pointer = new int[n]; //instanciando

	generateData(pointer, n);
	printData(pointer, n);

	cout << endl;
	eraseMultiplesOfThree(pointer, n);
	printData(pointer, n);

	cout << endl;
	bubbleSort(pointer, n);
	printData(pointer, n);

	cout << endl;
	insertNumber(pointer, n, 23);
	printData(pointer, n);

	/*int a = 10;
	int b = 20;

	cout << "La suma es: " << sum2(a, b) << endl;
	cout << "El valor de a es: " << a << endl;
	cout << "El valor de b es: " << b << endl;*/


	_getch();
	return 0;
}