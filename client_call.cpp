#include <iostream>

#include "Header.h"

int client_call()	//�������, ������� ������������ ���� ����� ������������.
{
	std::cout << "Enter number of variant (33 or 34 or 35): ";
	int number_of_variant;	//��������� ���������� ��� ������ ��������
	std::cin >> number_of_variant;	//������ �
	if (number_of_variant == 33)	//���� ������� 33 �������, ��...
	{
		std::cout << "You choosed variand number 33!" << std::endl;
		VARIANT_33();
	}
	if (number_of_variant == 34)	//���� ������� 34 �������, ��...
	{
		std::cout << "You choosed variand number 34!" << std::endl;
		VARIANT_34();
	}
	if (number_of_variant == 35)	//���� ������� 35 �������, ��...
	{
		std::cout << "You choosed variand number 35!" << std::endl;	//�� �������
		VARIANT_35();
	}
	if (number_of_variant != 33 and number_of_variant != 34 and number_of_variant != 35)	//���� ������������ �� ����� ������
	{
		std::cout << "You entered wrong number of variant! Please, choose of 33 or 34 or 35." << std::endl;
	}
	std::cout << "Press 1 to restart, any other number to finish: ";
	int end_programm = 0;	//����������, ������� �������� �� ��������� ���������. ���� ��� == 1, �� ��������� ��������������� ( ��� � main() )
	std::cin >> end_programm; //�� � ������ �� ����������
	return end_programm;
}
