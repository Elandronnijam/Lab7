//Лабораторная работа номер 7, вариант 33, 34 и 35 (на выбор)

#include <iostream>	//стандартная библиотека для вывода информации на консоль

#include <cmath>	//библиотека с расширенным математическим функционалом

#include "Header.h"	//преварительно написанный заголовочный файл с обьявленными функциями 3 последних вариантов и сервисных функций
	
int main()
{
	std::cout << "The program has successfuly started!";
	std::cout << std::endl << "--------------------------------" << std::endl;
	std::cout << std::endl;
	int restart_client_call_3 = 1;									//Переменная, от значения которой будет зависеть рестарт программы
	while (restart_client_call_3 == 1)
	{
		restart_client_call_3 = client_call();						//В конце clien_call обязан быдь оеператор ввода переменной ... 
	}																//... и возврат введенного значения
	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "See you next time!" << std::endl;
	return 0;
}
