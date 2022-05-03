#include "int-procedures.h"

void IsPalindrome()
{
	cout << "\n *��������: �� ��������?*\n\n������ ���������� �����: ";
	unsigned given_number; cin >> given_number;
	// ��������� �������� ������ ����� �� ���� n
	unsigned reversed_number = 0;
	unsigned rest_of_digits = given_number;
	// ���������� ����� ��������� �����
	while (rest_of_digits > 0)
	{
		unsigned rightmost_digit = rest_of_digits % 10; // �������� ���������� �����
		reversed_number = reversed_number*10 + rightmost_digit;      // ��������� ��
		rest_of_digits /= 10;                                       // � �������� ��
	}
	if (reversed_number == given_number) cout << given_number << " - ��������\n";
	else cout << given_number << " - �� ��������\n";
	return;
}