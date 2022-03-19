/*Написать программу, которая заменяет все
символы точки «.» в строке, введенной пользователем,
на символы восклицательного знака «!».*/

#include<iostream>
#include<string>

void replaceSymbol(std::string &str)
{
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
		{
			str[i] = '!';
		}
	}
}

int main()
{
	std::cout << "Enter string: ";
	std::string str;
	getline(std::cin, str);

	replaceSymbol(str);
	std::cout << str;

	return 0;
}