#include <iostream>

#include <cmath>

float log_a_b(int a, int b)	//сервисна€ функци€ логарифма, € долго старалс€, но она все равно не работает
{
	return (log(b) / log(a));
}

float VARIANT_35()	//35 вариант
{
	int x, y;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;

	float f = 0, b = 0, a = 0, g = 0;	//куча переменных с плавающей точкой дл€ вы€снени€, где программа не работает (так и не вы€снил)

	f = log_a_b(5, (pow(sin(x * pow(y, 3)), 2) + 0, 5));

	b = log((pow(sin(x * pow(y, 3)), 2) + 0, 5));

	a = log(5);

	g = b / a;

	std::cout << "The function arguments: " << x << " , " << y << std::endl;
	std::cout << "The function value: " << f << std::endl;	//вывод обоих способов посчета, к сожалению результат не помен€лс€.
	std::cout << "The function value: " << g << std::endl;
		//возможно дело в самой функции...
	return 0;
}