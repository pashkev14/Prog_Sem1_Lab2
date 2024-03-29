﻿/*
	Программа по определению точки (x, y) на принадлежность одному из кусочков графика заданной функции (рис 5.4, лит. з)
	Автор: Савин Павел Алексеевич, группа 2309. Версия 2.2
	Даты: Начало: 22.09.2022 Окончание: 04.10.2022
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
	std::setlocale(LC_ALL, "RUS");
	float a;
	std::cout << "Программа по определению точки (x, y) внутри кусочков графика функции\nАвтор: Савин Павел\nГрафик функции:\n";
	std::cout << "  y\n  ^\n a|_ _ _ _ _ _ _ _ _\n  | 00    00\n 0|0——0——0——0—-.—>x\n-a| a | /   | /\n  |   \\/    \\/\n  |\n";
	std::cout << "Введите a: ";
	std::cin >> a;
	float x, y;
	bool flag = false;
	std::cout << "Введите x и y через пробел: ";
	std::cin >> x >> y;
	if (a >= 0) {
		flag = ((((y <= std::sqrt((2 * a * x) - (x * x)) || y <= std::sqrt((10 * a * x) - (24 * a * a) - (x * x))) && y >= 0) || (y <= 0 && x >= (2 * a) && y >= (-x + a) && y >= ((2 * x) - (8 * a))) || (y <= 0 && x >= (6 * a) && y >= (-x + (5 * a)) && y >= ((2 * x) - (16 * a)))) ? true : false);
	}
	else {
		flag = ((((y >= -std::sqrt((2 * a * x) - (x * x)) || y >= -std::sqrt((10 * a * x) - (24 * a * a) - (x * x))) && y <= 0) || (y >= 0 && (x <= (2 * a)) && (y <= (-x + a)) && (y <= ((2 * x) - (8 * a)))) || (y >= 0 && x <= (6 * a) && y <= (-x + (5 * a)) && y <= ((2 * x) - (16 * a)))) ? true : false);
	}
	std::cout << "Точка (" << std::setprecision(4) << std::fixed << x << ", " << std::setprecision(4) << std::fixed << y << ") ";
	std::cout << (flag ? "принадлежит хотя бы" : "не принадлежит ни");
	std::cout << " одной из замкнутых областей с осью Ox";
	return 0;
}