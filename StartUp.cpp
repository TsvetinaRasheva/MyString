#include <iostream>
#include "String.h"

int main() {

	String str = String("Ivan");

	String str1 = String();
	str1.set_buffer("Georgi");
	str1.set_size();

	str.operator+(str1);

	String str2 = String();
	str2.set_buffer("Pesho");
	str2.set_size();

	String str3 = String("Aleksander");

	std::cout << (str == str) << std::endl;
	std::cout << (str1 == str) << std::endl;

	std::cout << str[2] << std::endl;
	std::cout << str[10] << std::endl;

	String str4 = String();
	std::cout << std::boolalpha << str4.empty() << std::endl;

	for (size_t i = 0; i < str2.get_size(); i++)
	{
		std::cout << str2.c_str()[i];
	}
	std::cout << std::endl;

	for (size_t i = 0; i < str.get_size(); i++)
	{
		std::cout << str.c_str()[i];
	}
	std::cout << std::endl;


	String str5 = String();
	str5 = str3;

	for (size_t i = 0; i < str5.get_size(); i++)
	{
		std::cout << str5.c_str()[i];
	}

	str5.reverse();
	std::cout << std::endl;

	for (size_t i = 0; i < str5.get_size(); i++)
	{
		std::cout << str5.c_str()[i];
	}

	String str6 = String("RTRfdf fdf @efs ff$RRR ee   33re");
	str6.toLowerCase();

	std::cout << std::endl;

	for (size_t i = 0; i < str6.get_size(); i++)
	{
		std::cout << str6.c_str()[i];
	}

	String str7 = String("RTRfdf fdf @efs ff$RRR ee   33re");
	str7.toUpperCase();

	std::cout << std::endl;

	for (size_t i = 0; i < str7.get_size(); i++)
	{
		std::cout << str7.c_str()[i];
	}

	String str8 = String("RT f fdf @efs f  ee $tt      RRR ee   33re");
	str8.trimSpaces();

	std::cout << std::endl;

	for (size_t i = 0; i < str8.get_size(); i++)
	{
		std::cout << str8.c_str()[i];
	}

	return 0;
}