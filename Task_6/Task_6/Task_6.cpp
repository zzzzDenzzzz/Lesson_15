/*Пользователь вводит строку. Определить количество букв,
количество цифр и количество остальных символов, присутствующих в строке.*/

#include<iostream>
#include<string>

void allCounter(std::string &str)
{
    int variable;
    int count_digital = 0, count_letter = 0, count_symbol = 0;

    for (int i = 0; i < str.length(); i++)
    {
        variable = static_cast<int>(str[i]);

        if (variable >= 48 && variable < 58)
        {
            count_digital++;
        }
        else if (variable >= 65 && variable < 91 || variable >= 97 && variable < 123)
        {
            count_letter++;
        }
        else if (variable >= 32 && variable < 48 || variable >= 58 && variable < 65 || 
                 variable >= 91 && variable < 97 || variable >= 123 && variable <= 126)
        {
            count_symbol++;
        }
    }
    std::cout << "Digitals: " << count_digital << std::endl;
    std::cout << "Letters: " << count_letter << std::endl;
    std::cout << "Symbols: " << count_symbol << std::endl;
}

int main()
{
	std::cout << "Enter string: ";
	std::string str;
	getline(std::cin, str);

	allCounter(str);

	return 0;
}