﻿#include "pch.h"
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class Complex
{
	float Re, Im;
public:
	void set_c() 
	{
		cout << "введите действительную часть" << endl;
		cin >> Re;
		cout << "введите мнимую часть" << endl;
		cin >> Im;
	}
	string get_c()
	{
		return to_string(Re) + "+" + to_string(Im) + "i";
	}
	float modul() 
	{
		return sqrt(Re*Re + Im * Im);
	}
	float arg()
	{
	return atan(Im / Re);
	}
};
int main()
{
	setlocale(LC_ALL, "russian");
Complex a;
a.set_c();
cout << a.get_c() << endl;;
cout << a.modul() << endl;
cout << a.arg() << endl;
system("pause");
return 0;
}