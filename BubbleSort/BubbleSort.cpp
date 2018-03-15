#include <iostream>

using namespace std;

void bubbleSort(int*, int);

int main()
{
	const int arraySize = 10;
	int arr[arraySize] = { 1,3,2,6,5,8,9,7,10,4 };

	bubbleSort(arr, arraySize);

	for (int i = 0; i < arraySize; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}

void bubbleSort(int* arr, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		bool swapped = false;

		for (int j = arraySize - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
				swapped = true;
			}
		}

		if (!swapped) break;
	}
}