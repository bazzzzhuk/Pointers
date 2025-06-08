#include<iostream>
using namespace std;

int chet = 0, ne4et = 0;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n, int& chet, int& ne4et);
void Completion(int arr[], const int n, int arr1[], int nn, int arr2[], int nnn);


void main()
{
	const int n = 10; int arr[n];
	
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n, chet, ne4et);
	int* Chet = new int[chet];
	int* Ne4et = new int[ne4et];
	Completion(arr, n, Chet, chet, Ne4et, ne4et);
	Print(Chet, chet);
	Print(Ne4et, ne4et);

}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n, int& chet, int& ne4et)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] % 2 == 0 ? chet++ : ne4et++;
	}
}
void Completion(int arr[], const int n, int arr1[], int nn, int arr2[], int nnn)
{
	for (int i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0)
		{ 
			
		}
	}
}
