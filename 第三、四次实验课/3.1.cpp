#include<iostream>
using namespace std;

int askGCD(int num1, int num2)
{
	int x=1;
	while (num1 >= num2 ? num1 % num2 : num2 % num1  != 0 )
	{
		num1 >= num2 ? x = num1 % num2, num2 = x : x = num2 % num1, num1 = x;
	}
	return x;
}

int askLCM(int num1, int num2 ,int num3)
{
	int x;
	x = num1 * num2 / num3;
	return x;
}

int main()
{
	int num1, num2;
	cout << "��������Ȼ��m��n" << endl;
	cin >> num1 >> num2;
	int GCD = askGCD(num1, num2);
	cout << "m��n���������Ϊ" << GCD << endl;
	int LCM = askLCM(num1, num2, GCD);
	cout << "m��n���������Ϊ" << LCM << endl;
	return 0;
}