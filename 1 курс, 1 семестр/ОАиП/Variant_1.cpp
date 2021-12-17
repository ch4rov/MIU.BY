#include <iostream>
using namespace std;

void input_array(int array[], int size){
	for (int i = 0; i < size; i++){
		cout << "Введите элемент с индексом " << i << ":" << endl;
		cin >> array[i];
	}
}

void print_array(int array[], int size){
	for (int i = 0; i < size; i++){
		if (i+1 >= size) cout << array[i] << endl;
		else cout << array[i] << " ";
	}
}

void find_average(int array[], int size){
	double sum = 0;
	for (int i = 0; i < size; i++){
		sum += array[i];
	}

	cout << "Среднее арифметическое значений равно " << sum / size << endl;
}


void find_max(int array[], int size){
	int max = array[0];
	for (int i = 0; i < size; i++){
		if (max < array[i]) max = array[i];
	}
	cout << "Максимальное значение в массиве равно " << max << endl;
}

void find_negative(int array[], int size){
	int negative = 0;
	for (int i = 0; i < size; i++){
		if (array[i] < 0) negative += 1;
	}
	cout << "Количество отрицательных элементов в массиве равно " << negative << endl;
}


void change_place(int array[], int size){
	for (int i = 0; i < size; i+=2){
		int temp = array[i];
		array[i] = array[i+1];
		array[i+1] = temp;
	}
	cout << "Данные в массиве успешно заменены!" << endl;
}


int main(void){
	int choose, size;
	int *arr = NULL;
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива:" << endl;
	cin >> size;
	while (true){
		cout << "Выберите действие: " << endl;
		cout << "1 - Ввод массива" << endl;
		cout << "2 - Вывод массива" << endl;
		cout << "3 - Нахождение среднего арифметического в массиве" << endl;
		cout << "4 - Нахождение максимального значения в массиве" << endl;
		cout << "5 - Кол-во отрицательных элементов в массиве" << endl;
		cout << "6 - Замена элементов в массиве на соседний" << endl;
		cout << "0 - Выход" << endl;
		cin >> choose;
		if (choose == 0) break;
		else if (choose == 1) {
			arr = new int[size];
			input_array(arr, size);
		}
		if (arr == 0){
			cout << "Массив не введен!" << endl;
			continue;
		}
		if (choose == 2){
			print_array(arr, size);
		}
		else if (choose == 3){
			find_average(arr, size);
		}
		else if (choose == 4){
			find_max(arr, size);
		}
		else if (choose == 5){
			find_negative(arr, size);
		}
		else if (choose == 6){
			change_place(arr, size);
		}
		else cout << "Неизвестный параметр!" << endl;
	}
}

///////// 2 задание //////////



int main(void)
{
    int choose;
    int size_row;
	int size_column;
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество строк:" << endl;
	cin >> size_row;
	cout << "Введите количество столбцов:" << endl;
	cin >> size_column;
	int arr[size_row][size_column];
	while (true){
		cout << "Выберите действие: " << endl;
		cout << "1 - Ввод массива" << endl;
		cout << "2 - Вывод массива" << endl;
		cout << "3 - Нахождение максимальных значений в строках" << endl;
		cout << "0 - Выход" << endl;
		cin >> choose;
		if (choose == 0) break;
		else if (choose == 1) {
			for (int i = 0; i < size_row; i++){
				for ( int j = 0; j < size_column; j++) {
	      			cout << "Введите значение соответствующее индексам " << "[" << i << "]" << "[" << j << "]" << endl;
	      			cin>>arr[i][j];
	      			cout << "now " <<  arr[i][j] << endl;
  				}
			}
		}
		else if (choose == 2){
			for (int i = 0; i < size_row; i++){
				for ( int j = 0; j < size_column; j++) {
	     			cout << arr[i][j] << " ";
	 			}
	 		cout << endl;
			}
		}
		else if (choose == 3){
			for (int i = 0; i < size_row; i++){
				int max_in_row = arr[i][0];
	    		for ( int j = 0; j < size_column;  j++ ) {
	      			if (arr[i][j] > max_in_row) max_in_row = arr[i][j];
  				}
  				cout << "Максимальный элемент в " << i << " строке = " << max_in_row << endl;
			}
		}
		else cout << "Неизвестный параметр!" << endl;
	}
}

