#include<iostream>
#include <windows.h>
#include <string>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	std::string secretword{"яблоко"};

    std::string userword;

    do {
        std::cout << "Угадайте слово: ";
        std::getline(std::cin >> std::ws, userword);


        if (userword != secretword)
        {
            std::cout << "Неправильно" << std::endl;
        }
    } while (userword != secretword);

    std::cout << "Правильно! Вы победили! Загаданное слово — " << secretword << std::endl;

	return EXIT_SUCCESS;
}