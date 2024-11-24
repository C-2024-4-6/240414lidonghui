#include<iostream>
#include<cmath>
using namespace std;

double squareRoot(double b)
{
	double a, c, d;
	if (b <= 0)							//��������ֵΪ�����������
	{
		return -1;						//����һ������ֵ��ʾ����
	}
	else 
	{
		a = b;							//������a��ֵ
		double x = 1e-5;			//��ֹ������С�����5λ��
		do						//�ðͱ��׷���ƽ����
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
	cout << "������������ƽ������ֵ" << endl;
	cin >> b;					//������Ҫ��ƽ������ֵ
	double c = squareRoot(b);
	if (c != -1)
	{
		cout << "��ֵ��ƽ����Ϊ" << c << endl;
	}
	else
	{
		cout << "����ֵ����������" << endl;
	}
	return 0;
}