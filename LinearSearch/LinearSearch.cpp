#include <iostream>
#include <vector>

int linearSearch(std::vector<int>, int);

int main()
{
	std::vector<int> numbers = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	linearSearch(numbers, 15);

	system("pause");
	return 0;
}

int linearSearch(std::vector<int> numbers, int value)
{
	int size = numbers.size();
	for (int i = 0; i < size; i++)
	{
		if (value == numbers[i])
		{
			std::cout << "Index of number " << value << " is " << i << std::endl;
			return 0;
		}
	}
	std::cout << "Number " << value << " not found " << std::endl;

	return 1;
}