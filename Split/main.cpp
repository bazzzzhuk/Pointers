#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Split(int arr[], const int n);

void main()
{

int ev = 0, od = 0;
int* even = new int[ev];
int* odd = new int[od];
	const int n = 10; 
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Split(arr, n);
	Print(even, ev);
	Print(odd, od);
	delete[] even;
	delete[] odd;
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)arr[i] = rand() % 100;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << "\t";	cout << endl;
}
void Split(int arr[], const int n)
{
	for (int i = 0; i < n; i++) arr[i] % 2 == 0 ? even[ev++] = arr[i] : odd[od++] = arr[i];
	
}