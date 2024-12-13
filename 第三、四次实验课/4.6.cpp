#include<iostream>
#include<cstring>
using namespace std;

void count(const char s[], int counts[])
{
	int n = strlen(s);				//读取字符串中的字符
	for (int i = 0; i < 26 ; i++)	//在字符串中分别以每一个字母为目标寻找出现次数
	{
		int x = 'a' + i;
		for (int j = 0; j < n; j++)
		{
			if (s[j] == x)			//出现时增加counts中的次数
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
	cout << "请输入字符串" << endl;
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