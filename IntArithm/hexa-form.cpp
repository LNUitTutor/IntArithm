#include "int-procedures.h"
#include <cmath>

void BinaryForm()
{
	cout << "\n *Переведення числа у двійкову систему*\n\n";
	unsigned given_number;
	cout << "Введіть натуральне число: "; cin >> given_number;
	unsigned long long binary_number = 0ULL; // двійковий запис спочатку порожній
	unsigned long long power_of_10 = 1ULL;   // power_of_10 = 10^0
	while (given_number > 0)
	{
		binary_number += (given_number % 2) * power_of_10; // остачу помістили в двійковий запис
		given_number /= 2;			  // частку треба ще перевести
		power_of_10 *= 10;		      // підготували степінь 10 для наступної цифри
	}
	cout << "Запис у двійковій системі: " << binary_number << '\n';
	return;
}

void BinaryFormStr()
{
	cout << "\n *Побудова запису числа у двійковій системі*\n\n";
	unsigned given_number;
	cout << "Введіть натуральне число: "; cin >> given_number;
	// готуємо місце для двійкового запису
	int k = log2(double(given_number)) + 1; // кількість двійкових цифр
	char * str = new char[k + 1];
	str[k] = '\0';        // кожен рядок закінчується літерою з кодом 0
	while (given_number > 0)
	{
		--k;
		if (given_number % 2 == 1)
			str[k] = '1';   // остання двійкова цифра непарного числа - 1
		else str[k] = '0';	// наприкінці парного - двійковий 0
		given_number /= 2;
	}
	cout << "Запис у двійковій системі: " << str << '\n';
	delete[] str;
	return;
}

void HexaFormStr()
{
	cout << "\n *Побудова запису числа у шістнадцятковій системі*\n\n";
	unsigned given_number;
	cout << "Введіть натуральне число: "; cin >> given_number;
	unsigned number = given_number;    // копія заданого числа для перетворень
	// готуємо місце для шістнадцяткового запису
	int k = log2(double(number)) / 4.0 + 1; // кількість шістнадцяткових цифр
	char * str = new char[k + 1];
	str[k] = '\0';              // кожен рядок закінчується літерою з кодом 0
	while (number > 0)
	{
		--k;
		unsigned digit = number % 16;         // остання шістадцяткова цифра числа
		if (digit < 10) str[k] = '0' + digit; // звичайні цифри
		else str[k] = 'A' - 10 + digit;       // старші цифри-букви
		number /= 16;
	}
	cout << "Запис " << given_number << " у шістнадцятковій системі: " << str << '\n';
	delete[] str;
	cout.setf(std::ios_base::hex, std::ios_base::basefield);
	cout << "Те саме засобами стандартної бібліотеки: " << given_number << '\n';
	return;
}