#include "int-procedures.h"

void IsPalindrome()
{
	cout << "\n *Перевірка: чи паліндром?*\n\nВведіть натуральне число: ";
	unsigned given_number; cin >> given_number;
	// початкове значення нового числа та копія n
	unsigned reversed_number = 0;
	unsigned rest_of_digits = given_number;
	// перебираємо цифри введеного числа
	while (rest_of_digits > 0)
	{
		unsigned rightmost_digit = rest_of_digits % 10; // отримали наймолодшу цифру
		reversed_number = reversed_number*10 + rightmost_digit;      // врахували її
		rest_of_digits /= 10;                                       // і вилучили її
	}
	if (reversed_number == given_number) cout << given_number << " - паліндром\n";
	else cout << given_number << " - не паліндром\n";
	return;
}