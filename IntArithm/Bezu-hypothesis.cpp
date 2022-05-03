#include "int-procedures.h"

// функція побудови зворотнього запису числа
long long Reverse(long long m)
{	// параметр-значення m містить копію заданого числа
	long long s = 0;         // "перевернуте" число
	while (m > 0)
	{
		s = s * 10 + m % 10; // враховуємо молодшу цифру
		m /= 10;             // і відкидаємо її
	}
	return s;
}

void BezuHypothesis()
{
	cout << "\n *Перевірка гіпотези Безу для x є [a;b]*\n\n";
	unsigned a, b, k;
	cout << "Введіть дані a, b, k: ";
	cin >> a >> b >> k;
	// параметр циклу перебиратиме числа заданого діапазону
	for (unsigned number = a; number <= b; ++number)
	{
		unsigned i = 0;            // лічильник внутрішнього циклу
		long long direct = number; // на першому кроці циклу - копія number,
						  // на наступних - сума прямого і оберненого запису
		long long reversed = 0;    // обернений запис числа direct
		do
		{
			direct += reversed;
			reversed = Reverse(direct);
			++i;
		} while (reversed != direct && i <= k);
		// результати перевірки
		std::cout << "Для числа " << number << " за " << i << " крок(и) ";
		if (reversed != direct) cout << "гіпотеза не виконується\n";
		else cout << "отримано паліндром " << reversed << '\n';
	}
	return;
}
