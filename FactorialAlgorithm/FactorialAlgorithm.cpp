#include <iostream>

int lookForFactorial(int);

int main()
{
	std::cout << lookForFactorial(0) << std::endl;

	system("pause");
	return 0;
}

int lookForFactorial(int number)
{
	int intermediateResult = 1;
	for (int factor = 2; factor <= number; factor++) {
		intermediateResult = intermediateResult * factor;
	}
	return intermediateResult;

	//if (number == 0) return 1;
	//return number * lookForFactorial(number - 1);
}