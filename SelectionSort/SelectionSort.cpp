#include <iostream>

using namespace std;

void selectionSort(int*, int);

int main()
{
	const int arraySize = 10;
	int arr[arraySize] = { 1,3,2,6,5,8,9,7,10,4 };

	selectionSort(arr, arraySize);

	for (int i = 0; i < arraySize; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}

void selectionSort(int* arr, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		int min = i;

		for (int j = i + 1; j < arraySize; j++)
		{
			if (arr[j] < arr[min]) min = j;
		}

		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}