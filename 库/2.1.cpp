#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "请输入一个字符" << endl;
	cin >> a;
	if (a >= 'a' &&  a<='z')
	{
		a = a - ('a'-'A');
		cout << "该字符的大写为" << a<< endl;

	}
	else
	{
		cout << "该字符的后继字符的ASCII码值为" << a + 1 << endl;

	}
}