/*Написать функцию, которая удаляет из строки
все вхождения в нее заданного символа.*/

#include<iostream>
#include<string>

void deleteSymbol(std::string &str, const char &symbol)
{
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (str[i] == symbol)
		{
			str.erase(i, 1);
			i--;
		}
	}
}

int main()
{
	std::cout << "Enter string: ";
	std::string str;
	getline(std::cin, str);

	std::cout << "Enter symbol: ";
	char symbol;
	std::cin >> symbol;

	deleteSymbol(str, symbol);
	std::cout << str;

	return 0;
}