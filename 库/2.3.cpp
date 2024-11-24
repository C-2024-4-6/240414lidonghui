#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	cout << "请输入三角形的三条边长" << endl;
	cin >> a >> b >> c;
	d = a + b + c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "该三边可以构成一个三角形" << endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形为等腰三角形" << endl;
			cout << "该三角形的周长为" << d << endl;
		}
		else
		{
			cout << "该三角形的周长为" << d << endl;
		}
	}
	else
	{
		cout << "该三边无法构成一个三角形" << endl;
	}
	return 0;
}