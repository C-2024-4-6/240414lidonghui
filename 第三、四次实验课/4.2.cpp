#include<iostream>
using namespace std;

double sinking(int num1 , double array[])		//ð�ݺ���
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
	cout << "������10������" << endl;
	for (int i = 0; i < 10; i++)		//����10�����ֵ�����	
	{
		cin >> array[i];
	}
	sinking(10, array);
	
	for (int i = 0; i < 10; i++)		//��ʾ���к������
	{
		cout << array[i] << '\t';
	}
	return 0;
}