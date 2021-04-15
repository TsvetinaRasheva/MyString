#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include <iostream>
#include "String.h"

TEST_CASE("Testing operator=") {
	String str("Ivan");
	String str1;
	str1 = str;
		
	CHECK(!strcmp(str1.c_str(), "Ivan"));
}

TEST_CASE("Testing operator+") {
	String str("Ivan");
	String str1("Ivanov");
	String str2;
	String str3("Pesho ");

	str2 + str;
	str2 + str1;
	
	str3 + str1;

	CHECK(!strcmp(str2.c_str(), "IvanIvanov"));
	CHECK(!strcmp(str3.c_str(), "Pesho Ivanov"));

}

TEST_CASE("Testing operator==") {
	String str("Ivan");
	String str1("Ivan");
	String str2("IvanIvanov");

	CHECK((str == str1));
	CHECK(!(str == str2));
}

TEST_CASE("Testing operatot!=") {
	String str("Ivan");
	String str1("Ivan");
	String str2("IvanIvanov");

	CHECK(!(str != str1));
	CHECK((str != str2));
}

TEST_CASE("Testing operatot[]") {
	String str("Ivan");

	char elem = str[2];
	char elem1 = str[0];
	char elem2 = str[10];


	CHECK((elem == 'a'));
	CHECK((elem1 == 'I'));
	CHECK((elem2 == ' '));

}

TEST_CASE("Testing resize method") {
	String str("Aleksander");
	String str1;

	str.resize(15);
	str1.resize(10);

	CHECK(str.get_size() == 15);
	CHECK(str1.get_size() == 10);
}

TEST_CASE("Testing reverse method") {
	String str("Aleksander");
	String str1("rednaskelA");

	str.reverse();
	
	CHECK(!strcmp(str.c_str(),str1.c_str()));
	
}

TEST_CASE("Testing copy method") {
	String str("Aleksander");
	String str1;

	str1.copy(str);

	CHECK(!strcmp(str.c_str(), str1.c_str()));
}

TEST_CASE("Testing toLowerCase method") {
	String str("AlekSaNDer");
	String str1("aleksander");

	str.toLowerCase();

	CHECK(!strcmp(str.c_str(), str1.c_str()));
}

TEST_CASE("Testing toUpperCase method") {
	String str("AlekSaNDer");
	String str1("ALEKSANDER");

	str.toUpperCase();

	CHECK(!strcmp(str.c_str(), str1.c_str()));
}

TEST_CASE("Testing trimSpaces method") {
	String str("   AL E  KS   A  NDE R  ");
	String str1("ALEKSANDER");

	str.trimSpaces();

	CHECK(!strcmp(str.c_str(), str1.c_str()));
}

TEST_CASE("Testing empty method") {
	String str;
	String str1("ALEKSANDER");

	CHECK(str.empty());
	CHECK(!str1.empty());

}

TEST_CASE("Testing set_buffer() method") {
	String str;
	
	str.set_buffer("ALEKSANDER");

	CHECK(!strcmp(str.c_str(),"ALEKSANDER"));
	CHECK(str.get_size() == 10);
}

TEST_CASE("Testing c_str() method") {
	String str("Petq");

	CHECK(!strcmp(str.c_str(), "Petq"));
	
}

TEST_CASE("Testing get_size() method") {
	String str("Ivanina");

	CHECK(str.get_size() == 7);
}

TEST_CASE("Testing set_size() method") {
	String str("Cvetelina");

	str.set_size();
	
	CHECK(str.get_size() == 9);
}


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

	std::cout << std::endl;

	doctest::Context().run();

	return 0;
}