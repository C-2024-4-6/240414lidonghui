#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;

int indexof(const char* const hexString)
{
	int n = strlen(hexString);		//��ȡ�ַ����ĳ���
	int x, y = 0;
	for (int i = 0; i < n; ++i)		//�����ַ���������ÿһλ��ֵ
	{
		if (hexString[i] >= 'A' &&  hexString[i] <= 'F')		//�ж��ַ���ʮ�������д������
		{
			x = hexString[i] - 'A' + 10;
			y  += (x * pow(16, n - i -1)) ;
		}
		else
		{
			x = hexString[i] - '0';
			y += (x * pow(16, n - i - 1 ));
		}
	}
	return y;
}

int main()
{
	char hexString[100];
	int i;
	cout << "������ʮ��������" << endl;
	cin >> hexString;
	i = indexof(hexString);
	cout << "תΪʮ������Ϊ��" << i << endl;

}