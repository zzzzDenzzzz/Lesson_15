/*Написать функцию, которая удаляет из строки
символ с заданным номером.*/

#include<iostream>
#include<string>

void deleteSymbol(std::string &str, const int &number)
{
	for (unsigned int i = number - 1; i < str.length(); i++)
	{
		str[i] = str[i + 1];
	}
}

int main()
{
	std::cout << "Enter string: ";
	std::string str;
	std::getline(std::cin, str);

	std::cout << "Enter number symbol: ";
	int number_symbol;
	std::cin >> number_symbol;

	deleteSymbol(str, number_symbol);

	std::cout << str;

	return 0;
}