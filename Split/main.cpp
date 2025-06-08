#include<iostream>
using namespace std;

int ev = 0, od = 0;
int* even = new int[ev];
int* odd = new int[od];

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

void main()
{
	const int n = 10; int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
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
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++) arr[i] % 2 == 0 ? even[ev++] = arr[i] : odd[od++] = arr[i];
	//{
		//if (arr[i] % 2 == 0) 
		//{
		//	even[ev++] = arr[i];
		//	//for (int i = 0; i <= ev; i++)cout << "ev= "<<ev<< " i_even = "<< i<< " even = " << even[i] << endl;
		//	//++ev;
		//	//int* even = new int[ev];
		//}
		//else
		//{
		//	odd[od++] = arr[i];
		//	//for (int i = 0; i <= od; i++)cout << "od= "<<od << " i_odd= " << i << " odd= " << odd[i] << endl;
		//	//++od;
		//	//int* odd = new int[od];
		//}
	//}
}