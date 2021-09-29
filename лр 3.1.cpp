// Lab_03_1.cpp
// Квецко Вікторії
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double a; // проміжний результат - функціонально стала частина виразу
	double b; // проміжний результат - функціонально змінна частина виразу

	cout << "x = "; cin >> x;

	a = 2*abs(5-x);

	// спосіб 1: розгалуження в скороченій формі
	if (x <= -1)
		b = exp(abs(2+x));
	if (-1 <= x && x <= 1)
		b = pow(sin(1/abs(2+x)),2);
	if (x >= 1)
		b = pow(cos(x), 2)/(1+ abs(sin(x)));

	y = a + b;

	cout << endl;
	cout << "1) y = " << y << endl;

	// спосіб 2: розгалуження в повній формі
	if (x <= -1)
		b = exp(abs(2 + x));
	else
		if (x >= 1)
			b = pow(cos(x), 2) / (1 + abs(sin(x)));
		else
			b = pow(sin(1 / abs(2 + x)), 2);

	y = a + b;

	cout << "2) y = " << y << endl;

	cin.get();
	return 1;
}
