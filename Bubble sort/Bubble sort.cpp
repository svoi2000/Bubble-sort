// Bubble sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Пузырьковая сортировка

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i, j, temp;
	bool b;
	int arr_size;

	cout << "Enter how many numbers: ";       
	cin >> arr_size;              // Вводим с клавиатуры количество элементов массива
	cout << "Enter " << arr_size << " numbers: ";
	int *list = new int[arr_size];
	for (i = 0; i < arr_size; i++)
	{
		cin >> list[i]; // Вводим с клавиатуры значение ячеек массива
	}

	j = arr_size;

	do
	{
		b = false;
		for (i = 0; i < j-1; i++)
		{
			if (list[i] > list[i + 1])
			{
				temp = list[i];
				list[i] = list[i+1];
				list[i + 1] = temp;
				b = true;
			} 
		}
		j--;
	} while ((j > 1) && b);

	cout << "Your sorted massive: ";
	for (i = 0; i < arr_size; i++)
	{
		cout << list[i] << " "; // На экран через пробелы выводятся все элементы массива
	}
	delete[] list;
}


