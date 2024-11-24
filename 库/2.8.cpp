#include<iostream>
#include<cmath>
using namespace std;

double squareRoot(double b)
{
	double a, c, d;
	if (b <= 0)							//考虑输入值为非正数的情况
	{
		return -1;						//返回一个特殊值表示错误
	}
	else 
	{
		a = b;							//给常数a赋值
		double x = 1e-5;			//终止条件（小数点后5位）
		do						//用巴比伦法求平方根
		{
			c = (a / b + b) / 2;
			d = fabs(c - b);
			b = c;
		} while (d > x);
		return c;
		
	}
}

int main()
{
	double b;
	cout << "请输入所需求平方根的值" << endl;
	cin >> b;					//输入所要求平方根的值
	double c = squareRoot(b);
	if (c != -1)
	{
		cout << "该值的平方根为" << c << endl;
	}
	else
	{
		cout << "输入值不符合条件" << endl;
	}
	return 0;
}