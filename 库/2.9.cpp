#include<iostream>
using namespace std;
int main()
{
	float price, days, num1, money, all;
	price = 0.8;
	days = 0;
	num1 = 2;
	all = 0;
	do
	{
		money = num1 * price;
		all += money;
		num1 *= 2;
		days++;
	} 
	while (num1 <= 100);
	float severay = all / days;
	cout << "ÿ��ƽ������" << severay << "Ԫ" << endl;
	
}