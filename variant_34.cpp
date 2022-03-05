#include <iostream>

#include <cmath>

float VARIANT_34()	//34 вариант
{
	int x, y;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;

	float f = 0;
	float sinus_1 = 0;
	sinus_1 = sin(pow(x, 2) / 2 + exp(pow(x, 3)));
	f = pow(sinus_1, 2) + cos((pow(y, 2) - y) / (pow(y, 2) + pow(y, 4)));

	std::cout << "The function arguments: " << x << " , " << y << std::endl;
	std::cout << "The function value: " << f << std::endl;

	return 0;
}