﻿// лаб1.c : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.//
#include"pch.h"
#include <stdio.h>
#include <math.h>

//Вариант 9
void main()
{
	float x = 2;
	float y = 1;
	float fxy = pow((cos(x) - cos(y)), 2.0) - pow((sin(x) - sin(y)), 2.0);
	printf("x=%f\r\n", x);
	printf("y=%f\r\n", y);
	printf("f(x,y)=%f\r\n", fxy);
	printf("vvod x:\t");
	scanf_s("%f", &x);
	printf("vvod y:\t");
	scanf_s("%f", &y);
	fxy = pow((cos(x) - cos(y)), 2.0) - pow((sin(x) - sin(y)), 2.0);
	printf("f(x,y)=%f\r\n", fxy);
	printf("finish\t\n");
	system("pause");
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
