#include<iostream>
#include<cstring>
using namespace std;

void count(const char s[], int counts[])
{
	int n = strlen(s);				//��ȡ�ַ����е��ַ�
	for (int i = 0; i < 26 ; i++)	//���ַ����зֱ���ÿһ����ĸΪĿ��Ѱ�ҳ��ִ���
	{
		int x = 'a' + i;
		for (int j = 0; j < n; j++)
		{
			if (s[j] == x)			//����ʱ����counts�еĴ���
			{
				counts[i]++;
			}

		}
	}
}

int main()
{
	char s[100];
	int counts[26] = { 0 };
	cout << "�������ַ���" << endl;
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			cout << static_cast<char>('a' + i) << ":" << counts[i] << endl;
		}
	}
}