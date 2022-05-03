#include "int-procedures.h"

void DigitsAverage()
{
	cout << "\n *���������� ���������� ������������� ����*\n\n������ ���������� �����: ";
	unsigned given_number; cin >> given_number;
	// ������������� ������� ����� - �������� ���� �����
	unsigned rest_of_digits = given_number;
	// �������� �������� ���� �� ���������
	unsigned sum = 0, digits_quantity = 0;
	// ���������� ����� ��������� �����
	while (rest_of_digits > 0)
	{
		unsigned rightmost_digit = rest_of_digits % 10; // �������� ���������� �����
		sum += rightmost_digit; ++digits_quantity;      // ��������� ��
		rest_of_digits /= 10;                           // �������� ��
	}
	// ����������� ���� �� ����� � ��������� ������ �����������
	double average = sum; average /= digits_quantity;
	cout << "������ ����� = " << given_number << "   ������ = " << average << '\n';
	return;
}