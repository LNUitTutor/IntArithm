#include "int-procedures.h"
#include <cmath>
using std::sqrt;

void Decomp_1()
{
	cout << "\n *Розклад числа на прості множники (1)*\n\n";
	unsigned given_number;
	cout << "Введіть натуральне число: "; cin >> given_number;
	// Знайдемо просте число, перевіримо, чи є воно дільником
	// починаємо друкувати розклад
	cout << given_number << " = 1";
	// переберемо можливі дільники
	for (unsigned divider = 2; divider <= given_number; ++divider)
	{
		// кожного з кандидатів перевіримо на простоту
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
			unsigned div_times = divider;         // степені простого divider
			while (given_number % div_times == 0) // скільки разів divider ділить given_number,
			{
				cout << " x " << divider;         // стільки разів його друкуємо
				div_times *= divider;
			}
		}
	}
	cout << '\n';  // друк розкладу завершено
	return;
}

void Decomp_2()
{
	cout << "\n *Розклад числа на прості множники (2)*\n\n";
	unsigned given_number;
	cout << "Введіть натуральне число: "; cin >> given_number;
	// Знайдемо дільник, перевіримо, чи він просте число
	// починаємо друкувати розклад
	cout << given_number << " = 1";
	// переберемо можливі дільники
	for (unsigned divider = 2; divider <= given_number; ++divider)
	{
		if (given_number % divider == 0)
		{
			// знайдений дільник перевіримо на простоту
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
				unsigned div_times = divider;         // степені простого divider
				while (given_number % div_times == 0) // скільки разів divider ділить given_number,
				{
					cout << " x " << divider;         // стільки разів його друкуємо
					div_times *= divider;
				}
			}
		}
	}
	cout << '\n';  // друк розкладу завершено
	return;
}

void Decomposition()
{
	cout << "\n *Розклад числа на прості множники (3)*\n\n";
	unsigned given_number;
	cout << "Введіть натуральне число: "; cin >> given_number;
	// Вилучатимемо дільники з числа, що гарантуватиме їхню простоту
	// починаємо друкувати розклад
	cout << given_number << " = 1";
	unsigned divider = 2; // перше просте число
	while (given_number > 1)
	{
		if (given_number % divider == 0)
		{
			// надрукуємо черговий дільник і вилучимо його з given_number
			cout << " x " << divider;
			given_number /= divider;
		}
		else ++divider; // перевіримо наступного кандидата
	}
	cout << '\n';  // друк розкладу завершено
	return;
}

void Factorization()
{
	cout << "\n *Розклад числа на прості множники (Седжвік)*\n\n";
	unsigned given_number;
	cout << "Введіть натуральне число: "; cin >> given_number;
	// Вилучатимемо дільники з числа, що гарантуватиме їхню простоту
	// Удосконалене відшукання останнього дільника
	// починаємо друкувати розклад
	cout << given_number << " = ";
	unsigned divider = 2; // перше просте число
	while (divider * divider <= given_number)
	{
		if (given_number % divider == 0)
		{
			// надрукуємо черговий дільник і вилучимо його з n
			cout << divider << " x ";
			given_number /= divider;
		}
		else ++divider; // перевіримо наступного кандидата
	}
	// Останній множник залишився в given_number
	cout << given_number << '\n';  // друк розкладу завершено
	return;
}