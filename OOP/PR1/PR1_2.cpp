#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	

	float a, b, s;
	int c;
	setlocale(LC_ALL, "Russian");
	cout << "������� �����";
		cin >> a;
		cout << "�������� ���� 1)+ 2)- 3)* 4)/";
		cin >> c;
		cout << "������� �����";
		cin >> b;

switch (c)
{
case 1:
{
	s = a + b;
	break;
}
case 2:
{
	s = a - b;
	break;
}
case 3:
{
	s = a * b;
	break;
}
case 4:
{
	s = a / b;
	break;
}
}
	cout <<s<<endl;

	return 0;
}
