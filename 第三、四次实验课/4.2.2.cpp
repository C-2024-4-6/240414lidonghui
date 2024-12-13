#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;

int indexof(const char* const hexString)
{
	int n = strlen(hexString);		//获取字符串的长度
	int x, y = 0;
	for (int i = 0; i < n; ++i)		//遍历字符串并计算每一位的值
	{
		if (hexString[i] >= 'A' &&  hexString[i] <= 'F')		//判断字符在十六进制中代表的数
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
	cout << "请输入十六进制数" << endl;
	cin >> hexString;
	i = indexof(hexString);
	cout << "转为十进制数为：" << i << endl;

}