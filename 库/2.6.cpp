#include<iostream>
#include<algorithm>
using namespace std;
 
int qy(int m, int n)				//��ֵ��ȡ�ຯ��
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
	cout << "����������������" << endl;
	cin >> a >> b;
	e = a, f = b;				//��������ֵ

	if (a == 0 || b == 0)		//����ֵΪ0�����
	{
		cout << "�������������Լ��Ϊ" << max(a, b) << endl;
		cout << "������������С������" << '0' << endl;
	}
	else
	{
		for (int x = 1; x != 0; x = min(a, b))				//�����Լ��
		{
			(a >= b ? a = qy(a, b) : b = qy(a, b));
		}
		c = max(a, b);
		cout << "�������������Լ��Ϊ" << c << endl;

		d = e * f / c;										//����С������
		cout << "�������������Լ��Ϊ" << d << endl;
	}

	return 0;
}