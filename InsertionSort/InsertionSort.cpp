#include <iostream>

using namespace std;

void insertionSort(int*, int);

int main()
{
	const int arraySize = 10;
	int arr[arraySize] = { 1,3,2,6,5,8,9,7,10,4 };

	insertionSort(arr, arraySize);

	for (int i = 0; i < arraySize; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}

void insertionSort(int* arr, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			else break;
		}
	}
}