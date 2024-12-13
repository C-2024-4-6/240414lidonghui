#include<iostream>
#include<cstdlib>
#include<ctime>
#include"mytemperature.h"
using namespace std;

int main()
{
	cout << "Celsius" << '\t' << "Fahrenheit" << '|' << "Celsius" << '\t' << "Fahrenheit" << endl;
	for (int i = 0; i < 5; i++)
	{
	srand(static_cast<unsigned int>(time(nullptr)));
	double num1 = rand() % 100;
	double num2 = celsius_to_fah(num1);

	double num3 = rand() % 200;
	double num4 = fahrenheit_to_cels(num3);

	cout << num1 << '\t' << '\t' << num2 << '\t' << '|' << num3 << '\t' << '\t' << num4 << endl;

	}
	
}
