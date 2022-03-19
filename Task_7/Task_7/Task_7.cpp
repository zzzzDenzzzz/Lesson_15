/*Есть некоторый текст. Используя стандартные строковые функции из библиотеки языка C:
-Найдите и замените вхождение некоторого слова на заданное пользователем слово.
-Изменить текст таким образом, чтобы каждое предложение начиналось с большой буквы.
-Посчитайте сколько раз каждая буква встречается в тексте.
-Посчитайте сколько раз цифры встречаются в тексте.*/

#include<iostream>
#include<string>

std::string replaceString(std::string source, std::string find, std::string replacement)
{
	std::string::size_type pos = 0;
	while ((pos = source.find(find, pos)) != std::string::npos)
	{
		source.replace(pos, find.size(), replacement);
		pos++;
	}

	return source;
}

std::string uppercaseLatter(std::string source)
{
	std::string::size_type pos = 0;
	source[pos] = toupper(source[pos]);

	for (unsigned int i = pos; i < source.length(); ++i)
	{
		if (source[i] == '.' || source[i] == '!' || source[i] == '?')
		{
			i++;
			while (source[i] == ' ')
			{
				i++;
			}
			source[i] = toupper(source[i]);
		}
	}
       
	return source;
}

void countLetter(std::string source)
{
	std::string str = source;
	for (unsigned int i = 0; i < str.length(); i++)
	{
		str[i] = std::tolower(str[i]);
	}

	for (char i = 'a'; i <= 'z'; i++)
	{
		int count_letter = 0;
		bool flag = true;
		for (unsigned int j = 0; j < str.length(); j++)
		{
			if (str[j] == i)
			{
				count_letter++;
				if (flag)
				{
					std::cout << str[j] << ": ";
					flag = false;
				}
			}
		}
		if (count_letter > 0)
		{
			std::cout << count_letter << std::endl;
		}
	}
}

int countDigit(std::string source)
{
	int count_digit = 0;
	for (char i = '0'; i <= '9'; i++)
	{
		for (unsigned int j = 0; j < source.length(); j++)
		{
			if (source[j] == i)
			{
				count_digit++;
			}
		}
	}

	return count_digit;
}

int main()
{
	std::string text{ "example of replace 12. example of replace 34! example of replace 56? example of replace 78.   cout\"hello world\"999" };
	std::cout << text << std::endl;
	std::string to_replace = "replace";
	
	std::cout << "Enter word: ";
	std::string word;
	getline(std::cin, word);

	text = replaceString(text, to_replace, word);
	std::cout << text << std::endl;

	text = uppercaseLatter(text);
	std::cout << text << std::endl;

	countLetter(text);
	int count_digit = countDigit(text);
	std::cout << "Digit = " << count_digit << std::endl;

	return 0;
}