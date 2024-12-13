#include<iostream>
using namespace std;

bool change(bool & a)		//创建利用引用改变数据的函数
{
	bool* p = &a;
	if (a == true)
	{
		*p = false;
		return  *p;
	}
	else
	{
		*p = true;
		return *p;
	}
}

int main()
{
	bool arr[100] = {false};		//创建一个含有100个数据的数组，并用bool型代表其开关状态
	for (int i=1 ; i <= 100; ++i)		//创建学生改变存物柜状态的循环（100个）
	{
		for (int s=i-1 ; s < 100; )
		{
			change(arr[s]);
			s = s + i;
		}
	}


	for (int j = 0; j < 100; j++)		//显示开着的存物柜的号码
	{
		if (arr[j] == true)
		{
			cout << j+1 << '\t';
		}
	}

}
