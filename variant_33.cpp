#include <iostream>

#include <cmath>

float VARIANT_33()	//33 вариант
{
	int x;
	std::cout << "Enter x: ";
	std::cin >> x;

	float f = 0;
	f = x - (pow(x, 2)/3) + (pow(x,5)/5);

	std::cout << "The function argument: " << x << std::endl;
	std::cout << "The function value: " << f << std::endl;

	return 0;
}