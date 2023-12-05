#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "task2.h"

void Task2()
{
	std::ifstream fin("task2.txt", std::ios::in);
	try {
		if (!fin.is_open()) {
			std::exception error("File didn't open");
			throw error;
		}
		if (fin.peek() == EOF) {
			std::exception empty("File is empty");
			throw empty;
		}
		std::ostringstream os;
		std::string s[3];
		bool is_sentence = false;
		int i = 0;
		while (!fin.eof()&&i<3)
		{
			std::string c;
			fin >> c;
			if (s[i] == "" && ((static_cast<int>(c[0]) >= 65 && static_cast<int>(c[0]) <= 90) || (static_cast<int>(c[0]) >= -64 && static_cast<int>(c[0]) <= -33)))
			{
				is_sentence = true;
			}
			s[i] += c + ' ';
			if (*(c.end()-1) == '.')
			{
				if (is_sentence)
				{
					i++;
					is_sentence = false;
				}
				else
					s[i] = "";
			}
		}
		for (int j = i-1; j >= 0; --j)
			os << s[j] << std::endl;
		std::cout << os.str();
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
		fin.close();
	}
	system("pause");
}