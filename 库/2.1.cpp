#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "������һ���ַ�" << endl;
	cin >> a;
	if (a >= 'a' &&  a<='z')
	{
		a = a - ('a'-'A');
		cout << "���ַ��Ĵ�дΪ" << a<< endl;

	}
	else
	{
		cout << "���ַ��ĺ���ַ���ASCII��ֵΪ" << a + 1 << endl;

	}
}