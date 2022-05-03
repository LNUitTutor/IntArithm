#include "int-procedures.h"

// ������� �������� ����������� ������ �����
long long Reverse(long long m)
{	// ��������-�������� m ������ ���� �������� �����
	long long s = 0;         // "�����������" �����
	while (m > 0)
	{
		s = s * 10 + m % 10; // ��������� ������� �����
		m /= 10;             // � �������� ��
	}
	return s;
}

void BezuHypothesis()
{
	cout << "\n *�������� ������� ���� ��� x � [a;b]*\n\n";
	unsigned a, b, k;
	cout << "������ ��� a, b, k: ";
	cin >> a >> b >> k;
	// �������� ����� ������������ ����� �������� ��������
	for (unsigned number = a; number <= b; ++number)
	{
		unsigned i = 0;            // �������� ����������� �����
		long long direct = number; // �� ������� ����� ����� - ���� number,
						  // �� ��������� - ���� ������� � ���������� ������
		long long reversed = 0;    // ��������� ����� ����� direct
		do
		{
			direct += reversed;
			reversed = Reverse(direct);
			++i;
		} while (reversed != direct && i <= k);
		// ���������� ��������
		std::cout << "��� ����� " << number << " �� " << i << " ����(�) ";
		if (reversed != direct) cout << "������� �� ����������\n";
		else cout << "�������� �������� " << reversed << '\n';
	}
	return;
}
