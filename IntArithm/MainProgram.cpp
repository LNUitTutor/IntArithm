#include <Windows.h>
#include "int-procedures.h"

int main()
{
	// ������ ����������� ����������
	//
	SetConsoleOutputCP(1251); // ��������� ��������� ���������
	int answer;
	do
	{
		system("cls");
		cout << "������� �������� ��� �������:\n\n 1 - ������ ����������� ���� �����\n"
			<< " 2 - �� � ����� ����������?\n 3 - �������� ������� ����\n"
			<< " 4 - ����������� �� (2) � (16) ������ ��������\n 5 - ������� ����� �� ����� ��������\n"
			<< " 6 - ���������� ������\n >>>> ";
		cin >> answer;
		system("cls");
		switch (answer)
		{
		case 1: DigitsAverage(); break;
		case 2: IsPalindrome(); break;
		case 3: BezuHypothesis(); break;
		case 4: BinaryForm(); BinaryFormStr(); HexaFormStr(); break;
		case 5: Decomp_1(); Decomp_2(); Decomposition(); Factorization(); break;
		default: cout << "�� ���������!\n";
		}
		system("pause");
	}
	while (answer > 0 && answer < 6);
	return 0;
}