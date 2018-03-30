#include <iostream>

void SentinelLinearSearch(int*, int, int);

int main()
{
	const int arraySize = 10;
	int arr[arraySize] = { 1,3,2,6,5,8,9,7,10,4 };
	int numberForSearch = 6; //The algorithm will look for this number

	SentinelLinearSearch(arr, arraySize, numberForSearch);

	system("pause");
	return 0;
}

void SentinelLinearSearch(int* arr, int arraySize, int numberForSearch)
{
	int lastElementOfArray = arr[arraySize - 1];
	arr[arraySize - 1] = numberForSearch; 
	int i = 0;
	while (arr[i] != numberForSearch)
	{
		i++;
	}
	arr[arraySize - 1] = lastElementOfArray;
	if ((i < arraySize - 1) || (numberForSearch == arr[arraySize - 1]))
	{
		std::cout << "Index of number " << numberForSearch << " is " << i << std::endl;
	}
	else
	{
		std::cout << "Number " << numberForSearch << " not found " << std::endl;
	}
}