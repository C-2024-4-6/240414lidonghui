#include<iostream>
using namespace std;
int main()
{
	int x = 1;
	for (int i = 1; i < 10; i++)
	{
		x = (x + 1) * 2;
	}
	cout << "第一天猴子共摘了" << x << "个桃子" << endl;
 }