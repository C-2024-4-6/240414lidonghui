#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	cout << "�����������ε������߳�" << endl;
	cin >> a >> b >> c;
	d = a + b + c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "�����߿��Թ���һ��������" << endl;
		if (a == b || a == c || b == c)
		{
			cout << "��������Ϊ����������" << endl;
			cout << "�������ε��ܳ�Ϊ" << d << endl;
		}
		else
		{
			cout << "�������ε��ܳ�Ϊ" << d << endl;
		}
	}
	else
	{
		cout << "�������޷�����һ��������" << endl;
	}
	return 0;
}