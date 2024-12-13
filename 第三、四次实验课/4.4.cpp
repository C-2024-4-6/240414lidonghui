#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1 ; ++i)			//将两个数组中的数据合并到一个数组中
	{
		list3[i] = list1[i];
	}
	for (int i = size1; i < size1 + size2; ++i)
	{
		list3[i] = list2[i - size1];
	}
	
	for (int i = 0; i < size1+size2 - 1; i++)				//冒泡排序
	{	
		for (int j = 0; j < size1+size2 - i - 1; j++)
		{
			if (list3[j] > list3[j+1])
			{
				int temp = list3[j];
				list3[j] = list3[j+1];
				list3[j+1] = temp;
			}
		}
	}
}


int main()
{
	int size1, size2;
	int list1[80], list2[80];
	
	cout << "请输入第一个数组的元素数" << endl;			//创建第一个数组
	cin >> size1;

	cout << "请输入一个排列好的数组" << endl;			//输入数组的数据
	for (int i = 0; i < size1; ++i)	
	{
		cin >> list1[i];
	}

	cout << "请输入第二个数组的元素数" << endl;			//创建第二个数组
	cin >> size2;

	cout << "请输入一个排列好的数组" << endl;
	for (int i = 0; i < size2; ++i)						//输入数组的数据
	{
		cin >> list2[i];
	}

	int list3[160];
	merge(list1, size1, list2, size2, list3);

	cout << "The merged list is";
	for (int i = 0; i < size1 + size2; ++i)
	{
		cout << list3[i] << '\t';
	}
}
