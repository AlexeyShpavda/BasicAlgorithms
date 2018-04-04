#include <iostream>
#include <vector>

int search(std::vector<int>, int);

int main()
{
	std::vector<int> numbers = { 2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	search(numbers, 1);

	system("pause");
	return 0;
}

int search(std::vector<int> numbers, int value)
{
	int first = 0;
	int last = numbers.size() - 1;
	int central = (first + last) / 2;

	while (first <= last)
	{
		central = (first + last) / 2;
		if (value == numbers[central])
		{
			std::cout << "Index of number " << value << " is " << central << std::endl;
			return 0;
		}
		else if (value > numbers[central])
		{
			first = central + 1;
		}
		else
		{
			last = central - 1;
		}
	}

	std::cout << "Number " << value << " not found. Should be on position with an index "
		<< central << std::endl;


	return 1;
}