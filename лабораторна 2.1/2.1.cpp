// Lab_02.cpp
// ��������� ����
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 15
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ukr");
	double b; //������� ��������
	double z1; // ��������� ��������� 1-�� ������
	double z2; // ��������� ��������� 2-�� ������
	cout << "b = "; // ����
	cin >> b; // ��� 
	z1 = sqrt((2 * b) + 2 * sqrt(b * b - 4)) / (sqrt(b * b - 4) + b + 2); // 1-�� �������
	z2 = ((1.0) / sqrt(b + 2)); // 2-�� �������
	cout << z1 << endl; //���� ����������
	cout << z2 << endl; // ���� ����������


}