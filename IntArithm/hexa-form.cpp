#include "int-procedures.h"
#include <cmath>

void BinaryForm()
{
	cout << "\n *����������� ����� � ������� �������*\n\n";
	unsigned given_number;
	cout << "������ ���������� �����: "; cin >> given_number;
	unsigned long long binary_number = 0ULL; // �������� ����� �������� �������
	unsigned long long power_of_10 = 1ULL;   // power_of_10 = 10^0
	while (given_number > 0)
	{
		binary_number += (given_number % 2) * power_of_10; // ������ �������� � �������� �����
		given_number /= 2;			  // ������ ����� �� ���������
		power_of_10 *= 10;		      // ���������� ������ 10 ��� �������� �����
	}
	cout << "����� � ������� ������: " << binary_number << '\n';
	return;
}

void BinaryFormStr()
{
	cout << "\n *�������� ������ ����� � ������� ������*\n\n";
	unsigned given_number;
	cout << "������ ���������� �����: "; cin >> given_number;
	// ������ ���� ��� ��������� ������
	int k = log2(double(given_number)) + 1; // ������� �������� ����
	char * str = new char[k + 1];
	str[k] = '\0';        // ����� ����� ���������� ������ � ����� 0
	while (given_number > 0)
	{
		--k;
		if (given_number % 2 == 1)
			str[k] = '1';   // ������� ������� ����� ��������� ����� - 1
		else str[k] = '0';	// ��������� ������� - �������� 0
		given_number /= 2;
	}
	cout << "����� � ������� ������: " << str << '\n';
	delete[] str;
	return;
}

void HexaFormStr()
{
	cout << "\n *�������� ������ ����� � �������������� ������*\n\n";
	unsigned given_number;
	cout << "������ ���������� �����: "; cin >> given_number;
	unsigned number = given_number;    // ���� �������� ����� ��� �����������
	// ������ ���� ��� ���������������� ������
	int k = log2(double(number)) / 4.0 + 1; // ������� ��������������� ����
	char * str = new char[k + 1];
	str[k] = '\0';              // ����� ����� ���������� ������ � ����� 0
	while (number > 0)
	{
		--k;
		unsigned digit = number % 16;         // ������� ������������� ����� �����
		if (digit < 10) str[k] = '0' + digit; // ������� �����
		else str[k] = 'A' - 10 + digit;       // ������ �����-�����
		number /= 16;
	}
	cout << "����� " << given_number << " � �������������� ������: " << str << '\n';
	delete[] str;
	cout.setf(std::ios_base::hex, std::ios_base::basefield);
	cout << "�� ���� �������� ���������� ��������: " << given_number << '\n';
	return;
}