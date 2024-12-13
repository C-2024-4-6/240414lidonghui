#include<iostream>
using namespace std;

void change(int* arr, int size)			//对数组冒泡排序
{

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int size;									//输入数组元素个数
	cout << "请输入数组的元素个数" << endl;
	cin >> size;
	int* arr = new int[size];

	cout << "请输入数组元素" << endl;			//输入数组元素
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	change(arr,size);				//将数组冒泡排序

	cout << "排序后的数组为" << endl;

	int* p = arr;					//利用指针输出数组元素
	for (int i=0 ; i < size; i++)
	{
		cout << *p << '\t';
		p++;
	}
	delete[]arr;

}