#include <iostream>

int main()
{
	std::cout << "Введите имя пользователя:"; //Ввод имени пользователя
	std::string name;
	std::cin >> name;
	std::cout << "Hello word from " << name << "!"; //Вывод на экран
	return 0;
}
