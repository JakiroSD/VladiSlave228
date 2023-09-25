#include <iostream>

int main()
{
	std::cout << "Введите имя пользователя: ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello word from" << name << "!";
	return 0;
}
