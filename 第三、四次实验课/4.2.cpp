#include<iostream>
using namespace std;

double sinking(int num1 , double array[])		//冒泡函数
{
	for (int j = 0; j < num1; j++)
	{
		for (int x = j + 1; x < num1; x++)
		{
			if (array[j] > array[x])
			{
				int temp = array[j];
				array[j] = array[x];
				array[x] = temp;
			}
		}
	}

	return 0;
}

int main()
{
	double array[10];
	cout << "请输入10个数字" << endl;
	for (int i = 0; i < 10; i++)		//读入10个数字到数组	
	{
		cin >> array[i];
	}
	sinking(10, array);
	
	for (int i = 0; i < 10; i++)		//显示排列后的数字
	{
		cout << array[i] << '\t';
	}
	return 0;
}