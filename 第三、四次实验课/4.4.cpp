#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1 ; ++i)			//�����������е����ݺϲ���һ��������
	{
		list3[i] = list1[i];
	}
	for (int i = size1; i < size1 + size2; ++i)
	{
		list3[i] = list2[i - size1];
	}
	
	for (int i = 0; i < size1+size2 - 1; i++)				//ð������
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
	
	cout << "�������һ�������Ԫ����" << endl;			//������һ������
	cin >> size1;

	cout << "������һ�����кõ�����" << endl;			//�������������
	for (int i = 0; i < size1; ++i)	
	{
		cin >> list1[i];
	}

	cout << "������ڶ��������Ԫ����" << endl;			//�����ڶ�������
	cin >> size2;

	cout << "������һ�����кõ�����" << endl;
	for (int i = 0; i < size2; ++i)						//�������������
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
