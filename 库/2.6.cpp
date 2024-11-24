#include<iostream>
#include<algorithm>
using namespace std;
 
int qy(int m, int n)				//两值间取余函数
{
	int o;
	if (m >= n)
	{
		o = m % n;
	}
	else
	{
		o = n % m;
	}
	return o;
}

int main()
{
	int a, b, c, d, e, f;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	e = a, f = b;				//保留输入值

	if (a == 0 || b == 0)		//考虑值为0的情况
	{
		cout << "这两个数的最大公约数为" << max(a, b) << endl;
		cout << "这两个数的最小公倍数" << '0' << endl;
	}
	else
	{
		for (int x = 1; x != 0; x = min(a, b))				//求最大公约数
		{
			(a >= b ? a = qy(a, b) : b = qy(a, b));
		}
		c = max(a, b);
		cout << "这两个数的最大公约数为" << c << endl;

		d = e * f / c;										//求最小公倍数
		cout << "这两个数的最大公约数为" << d << endl;
	}

	return 0;
}