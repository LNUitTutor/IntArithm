#include "int-procedures.h"
#include <cmath>
using std::sqrt;

void Decomp_1()
{
	cout << "\n *������� ����� �� ����� �������� (1)*\n\n";
	unsigned given_number;
	cout << "������ ���������� �����: "; cin >> given_number;
	// �������� ������ �����, ���������, �� � ���� ��������
	// �������� ��������� �������
	cout << given_number << " = 1";
	// ���������� ������ �������
	for (unsigned divider = 2; divider <= given_number; ++divider)
	{
		// ������� � ��������� ��������� �� ��������
		bool is_prime = true;
		unsigned high = sqrt(double(divider)) + 0.5;
		for (unsigned i = 2; i <= high; ++i)
		{
			if (divider % i == 0)
			{
				is_prime = false;
				break;
			}
		}
		if (is_prime)
		{
			unsigned div_times = divider;         // ������ �������� divider
			while (given_number % div_times == 0) // ������ ���� divider ����� given_number,
			{
				cout << " x " << divider;         // ������ ���� ���� �������
				div_times *= divider;
			}
		}
	}
	cout << '\n';  // ���� �������� ���������
	return;
}

void Decomp_2()
{
	cout << "\n *������� ����� �� ����� �������� (2)*\n\n";
	unsigned given_number;
	cout << "������ ���������� �����: "; cin >> given_number;
	// �������� ������, ���������, �� �� ������ �����
	// �������� ��������� �������
	cout << given_number << " = 1";
	// ���������� ������ �������
	for (unsigned divider = 2; divider <= given_number; ++divider)
	{
		if (given_number % divider == 0)
		{
			// ��������� ������ ��������� �� ��������
			bool is_prime = true;
			unsigned high = sqrt(double(divider)) + 0.5;
			for (unsigned i = 2; i <= high; ++i)
			{
				if (divider % i == 0)
				{
					is_prime = false;
					break;
				}
			}
			if (is_prime)
			{
				unsigned div_times = divider;         // ������ �������� divider
				while (given_number % div_times == 0) // ������ ���� divider ����� given_number,
				{
					cout << " x " << divider;         // ������ ���� ���� �������
					div_times *= divider;
				}
			}
		}
	}
	cout << '\n';  // ���� �������� ���������
	return;
}

void Decomposition()
{
	cout << "\n *������� ����� �� ����� �������� (3)*\n\n";
	unsigned given_number;
	cout << "������ ���������� �����: "; cin >> given_number;
	// ������������ ������� � �����, �� ������������� ���� ��������
	// �������� ��������� �������
	cout << given_number << " = 1";
	unsigned divider = 2; // ����� ������ �����
	while (given_number > 1)
	{
		if (given_number % divider == 0)
		{
			// ��������� �������� ������ � �������� ���� � given_number
			cout << " x " << divider;
			given_number /= divider;
		}
		else ++divider; // ��������� ���������� ���������
	}
	cout << '\n';  // ���� �������� ���������
	return;
}

void Factorization()
{
	cout << "\n *������� ����� �� ����� �������� (������)*\n\n";
	unsigned given_number;
	cout << "������ ���������� �����: "; cin >> given_number;
	// ������������ ������� � �����, �� ������������� ���� ��������
	// ������������ ��������� ���������� �������
	// �������� ��������� �������
	cout << given_number << " = ";
	unsigned divider = 2; // ����� ������ �����
	while (divider * divider <= given_number)
	{
		if (given_number % divider == 0)
		{
			// ��������� �������� ������ � �������� ���� � n
			cout << divider << " x ";
			given_number /= divider;
		}
		else ++divider; // ��������� ���������� ���������
	}
	// ������� ������� ��������� � given_number
	cout << given_number << '\n';  // ���� �������� ���������
	return;
}