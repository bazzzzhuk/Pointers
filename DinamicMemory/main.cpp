#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int* push_back(int arr[],int& n, int value);
int* push_front(int arr[], int& n, int value);

int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);

int* insert(int arr[], int& n, int value, int index);
int* replacement(int arr[], int& n, int value, int index);
int* erase(int arr[], int& n, int index);


void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_back(arr, n, value);
	Print(arr, n);

	cout << "Введите добавляемое значение: "; cin >> value;
	arr=push_front(arr, n, value);
	Print(arr, n);
	arr = pop_back(arr, n);
	cout << "Pop_back" << endl;
	Print(arr, n);
	
	arr = pop_front(arr, n);
	cout << "Pop_front" << endl;
	Print(arr, n);

	//insert - добавляет значение раздвигая под него массив
	int index;
	cout << "Введите добавляемое значение и индекс: "; cin >> value >> index;
	arr = insert(arr, n, value, index);
	Print(arr, n);

	//replacement - заменяет значение по индексу
	cout << "Введите заменяемое значение и индекс: "; cin >> value >> index;
	arr = replacement(arr, n, value, index);
	Print(arr, n);

	//erase - удаляет значение/элемент массива по индексу
	cout << "Введите индекс удаляемого элемента: "; cin >> index;
	arr=erase(arr, n, index);
	Print(arr, n);

	delete[] arr;
}


void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	//cout << arr << endl;
	//cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";//subscript operator
	}
	cout << endl;
}

int* push_back(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	buffer = nullptr;//nullptr - указатель на ноль.
	arr[n] = value;
	n++;
	return arr;
}
int* push_front(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++) buffer[i+1] = arr[i];
	delete[] arr;
	buffer[0] = value;
	n++;
	return buffer;
}
int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}
int* pop_front(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i + 1];
	delete[]arr;
	return buffer;
}
int* insert(int arr[], int& n, int value, int index)
{
	int* buffer = new int[++n];
	for (int i = 0; i < n; i++)i < index ? buffer[i] = arr[i] : buffer[i+1] = arr[i];
	buffer[index] = value;
	delete[] arr;
	return buffer;
}
int* replacement(int arr[], int& n, int value, int index)
{
	arr[index] = value;
	return arr;
}
int* erase(int arr[], int& n, int index)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++) i< index ? buffer[i] = arr[i] :buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;
}
