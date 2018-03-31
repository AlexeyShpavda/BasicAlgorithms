#include<iostream>

int recursiveLinearSearch(int*, int, int);

int main()
{
	int arraySize = 10;
	int* arr = new int[arraySize];
	int numberForSearch = 7; //The algorithm will look for this number

	for (int i = 0; i < arraySize; i++)
	{
		arr[i] = i;
	}

	int indexOfFoundElement;

	indexOfFoundElement = recursiveLinearSearch(arr, numberForSearch, arraySize-1);

	if (indexOfFoundElement != -1) {
		std::cout << "Index of number " << numberForSearch << " is " << indexOfFoundElement << std::endl;
	}
	else {
		std::cout << "Number " << numberForSearch << " not found " << std::endl;
	}
	system("pause");
	return 0;
}

int recursiveLinearSearch(int* arr, int numberForSearch, int arraySize) 
{
	if (arraySize < 0)
	{
		return -1;
	}
	else if (arr[arraySize] == numberForSearch)
	{
		return arraySize;
	}
	else
	{
		return recursiveLinearSearch(arr, numberForSearch, arraySize - 1);
	}
}