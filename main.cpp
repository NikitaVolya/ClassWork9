
#include <iostream>
#include <string>

void upperChar(std::string& line, int index)
{
	if ((int)line[index] >= 97 && (int) line[index] <= 122)
		line[index] = (int)line[index] - 32;
}

void exercice1()
{
	std::string name;

	std::cout << "Entre name and lastname: ";
	std::getline(std::cin, name);

	upperChar(name, 0);
	upperChar(name, 1);

	std::cout << name << std::endl;

	std::cout << name.front() << std::endl;
	std::cout << name.at(3) << ", " << name.at(5) << ", " << name.at(7) << std::endl;
}


int main()
{
	exercice1();

	return 0;
}