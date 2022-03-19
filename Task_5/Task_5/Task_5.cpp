/*Пользователь вводит строку символов и искомый символ, 
посчитать сколько раз он встречается в строке.*/

#include<iostream>
#include<string>

int countSymbol(std::string &str, const char &symbol)
{
	int count = 0;
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (str[i] == symbol)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	std::cout << "Enter string: ";
	std::string str;
	getline(std::cin, str);

	std::cout << "Enter symbol: ";
	char symbol;
	std::cin >> symbol;

	int counter = countSymbol(str, symbol);
	std::cout << "Symbol counter = " << counter;

	return 0;
}