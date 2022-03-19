/*Написать функцию, которая вставляет в строку
в указанную позицию заданный символ.*/

#include<iostream>
#include<string>

void insertSymbol(std::string &str, int &number, char &symbol)
{
	number--;
    str.insert(number, 1, symbol);
}

int main()
{
	std::cout << "Enter string: ";
	std::string str;
	getline(std::cin, str);

	std::cout << "Enter symbol: ";
	char symbol;
	std::cin >> symbol;

	std::cout << "Enter number: ";
	int number;
	std::cin >> number;

	insertSymbol(str, number, symbol);
	std::cout << str;

	return 0;
}