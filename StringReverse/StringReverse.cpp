#include <iostream>

int main()
{
	char string[] = "esrever gnirtS";

	for (short i = 0, j = strlen(string) - 1; i < j; i++, j--)
	{
		char temp = string[i];
		string[i] = string[j];
		string[j] = temp;
	}

	std::cout << string << std::endl;

	system("pause");
	return 0;
}