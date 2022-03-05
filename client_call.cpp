#include <iostream>

#include "Header.h"

int client_call()	//функция, которая обрабатывает один вызов пользователя.
{
	std::cout << "Enter number of variant (33 or 34 or 35): ";
	int number_of_variant;	//объявляем переменную для выбора варианта
	std::cin >> number_of_variant;	//вводим её
	if (number_of_variant == 33)	//если выбрали 33 вариант, то...
	{
		std::cout << "You choosed variand number 33!" << std::endl;
		VARIANT_33();
	}
	if (number_of_variant == 34)	//если выбрали 34 вариант, то...
	{
		std::cout << "You choosed variand number 34!" << std::endl;
		VARIANT_34();
	}
	if (number_of_variant == 35)	//если выбрали 35 вариант, то...
	{
		std::cout << "You choosed variand number 35!" << std::endl;	//не отлажен
		VARIANT_35();
	}
	if (number_of_variant != 33 and number_of_variant != 34 and number_of_variant != 35)	//если пользователь не умеет читать
	{
		std::cout << "You entered wrong number of variant! Please, choose of 33 or 34 or 35." << std::endl;
	}
	std::cout << "Press 1 to restart, any other number to finish: ";
	int end_programm = 0;	//переменная, которая отвечает за перезапус программы. Если она == 1, то программа перезапуститься ( код в main() )
	std::cin >> end_programm; //ну и вводим ее собственно
	return end_programm;
}
