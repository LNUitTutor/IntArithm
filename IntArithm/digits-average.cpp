#include "int-procedures.h"

void DigitsAverage()
{
	cout << "\n *Обчислення середнього арифметичного цифр*\n\nВведіть натуральне число: ";
	unsigned given_number; cin >> given_number;
	// неопрацьована частина числа - спочатку ціле число
	unsigned rest_of_digits = given_number;
	// початкові значення суми та лічильника
	unsigned sum = 0, digits_quantity = 0;
	// перебираємо цифри введеного числа
	while (rest_of_digits > 0)
	{
		unsigned rightmost_digit = rest_of_digits % 10; // отримали наймолодшу цифру
		sum += rightmost_digit; ++digits_quantity;      // врахували її
		rest_of_digits /= 10;                           // вилучили її
	}
	// перетворили ціле на дійсне і обчислили середнє арифметичне
	double average = sum; average /= digits_quantity;
	cout << "задане число = " << given_number << "   середнє = " << average << '\n';
	return;
}