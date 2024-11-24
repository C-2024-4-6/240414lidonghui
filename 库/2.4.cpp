#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	char d;
	cout << "请输入计算值" << endl;
	cin >> a;
	cout << "请输入运算符" << endl;
	cin >> d;
	cout << "请输入计算值" << endl;
	cin >> b;
	switch (d)
	{
	case'+':c = a + b;
		cout << "和为" << c << endl;
		break;
	
	case'-':c = a - b;
		cout << "差为" << c << endl;
		break;
	
	case'*':c = a * b;
		cout << "乘积为" << c << endl;
	
	case'/':
		if (b == 0)		//判断除数是否为0
		{
			cout << "除数不能为0！" << endl;
			break;
		}
		else
		{
			c = a / b;
			cout << "商为" << c << endl;
		}
		break;

	case'%':
		if (b == 0)		//判断除数是否为0
		{
			cout << "除数不能为0！" << endl;
			break;
		}
		else
		{
			int e = a, f = b;
			c = e % f;			//将double型转换为int型
			cout << "取余得" << c << endl;
		}
		break;
	default:
		cout << "运算符非法" << endl;
		break;

	}
	return 0;
}