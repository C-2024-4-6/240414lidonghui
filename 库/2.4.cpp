#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	char d;
	cout << "���������ֵ" << endl;
	cin >> a;
	cout << "�����������" << endl;
	cin >> d;
	cout << "���������ֵ" << endl;
	cin >> b;
	switch (d)
	{
	case'+':c = a + b;
		cout << "��Ϊ" << c << endl;
		break;
	
	case'-':c = a - b;
		cout << "��Ϊ" << c << endl;
		break;
	
	case'*':c = a * b;
		cout << "�˻�Ϊ" << c << endl;
	
	case'/':
		if (b == 0)		//�жϳ����Ƿ�Ϊ0
		{
			cout << "��������Ϊ0��" << endl;
			break;
		}
		else
		{
			c = a / b;
			cout << "��Ϊ" << c << endl;
		}
		break;

	case'%':
		if (b == 0)		//�жϳ����Ƿ�Ϊ0
		{
			cout << "��������Ϊ0��" << endl;
			break;
		}
		else
		{
			int e = a, f = b;
			c = e % f;			//��double��ת��Ϊint��
			cout << "ȡ���" << c << endl;
		}
		break;
	default:
		cout << "������Ƿ�" << endl;
		break;

	}
	return 0;
}