#include<iostream>
using namespace std;

bool change(bool & a)		//�����������øı����ݵĺ���
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
	bool arr[100] = {false};		//����һ������100�����ݵ����飬����bool�ʹ����俪��״̬
	for (int i=1 ; i <= 100; ++i)		//����ѧ���ı�����״̬��ѭ����100����
	{
		for (int s=i-1 ; s < 100; )
		{
			change(arr[s]);
			s = s + i;
		}
	}


	for (int j = 0; j < 100; j++)		//��ʾ���ŵĴ����ĺ���
	{
		if (arr[j] == true)
		{
			cout << j+1 << '\t';
		}
	}

}
