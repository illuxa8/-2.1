// Lab_02.cpp
// Мельничук Ілля
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 15
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ukr");
	double b; //вхідний параметр
	double z1; // результат обчислень 1-го виразу
	double z2; // результат обчислень 2-го виразу
	cout << "b = "; // вивід
	cin >> b; // ввід 
	z1 = sqrt((2 * b) + 2 * sqrt(b * b - 4)) / (sqrt(b * b - 4) + b + 2); // 1-ша формула
	z2 = ((1.0) / sqrt(b + 2)); // 2-га формула
	cout << z1 << endl; //вивід результату
	cout << z2 << endl; // вивід результату


}