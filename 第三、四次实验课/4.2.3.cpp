#include<iostream>
using namespace std;

void change(int* arr, int size)			//������ð������
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
	int size;									//��������Ԫ�ظ���
	cout << "�����������Ԫ�ظ���" << endl;
	cin >> size;
	int* arr = new int[size];

	cout << "����������Ԫ��" << endl;			//��������Ԫ��
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	change(arr,size);				//������ð������

	cout << "����������Ϊ" << endl;

	int* p = arr;					//����ָ���������Ԫ��
	for (int i=0 ; i < size; i++)
	{
		cout << *p << '\t';
		p++;
	}
	delete[]arr;

}