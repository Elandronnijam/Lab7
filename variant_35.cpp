#include <iostream>

#include <cmath>

float log_a_b(int a, int b)	//��������� ������� ���������, � ����� ��������, �� ��� ��� ����� �� ��������
{
	return (log(b) / log(a));
}

float VARIANT_35()	//35 �������
{
	int x, y;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;

	float f = 0, b = 0, a = 0, g = 0;	//���� ���������� � ��������� ������ ��� ���������, ��� ��������� �� �������� (��� � �� �������)

	f = log_a_b(5, (pow(sin(x * pow(y, 3)), 2) + 0, 5));

	b = log((pow(sin(x * pow(y, 3)), 2) + 0, 5));

	a = log(5);

	g = b / a;

	std::cout << "The function arguments: " << x << " , " << y << std::endl;
	std::cout << "The function value: " << f << std::endl;	//����� ����� �������� �������, � ��������� ��������� �� ���������.
	std::cout << "The function value: " << g << std::endl;
		//�������� ���� � ����� �������...
	return 0;
}