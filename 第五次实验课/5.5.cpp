#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	
public:
	void setPoint(int i, int j)		//�޸�����ֵ����
	{
		x = 60 + i;
		y = 80 + j;
	}

	void creatPoint()		//��ʼ��������
	{
		x = 60;
		y = 80;
	}

	void display()			//�������ֵ����
	{
		cout << "����ֵ" << '(' << x << ',' << y << ')' << endl;
	}
};

int main()
{
	Point s1;
	s1.creatPoint();

	int i, j;
	cout << "�������޸ĵ�����ֵx��y" << endl;
	cin >> i >> j;
	s1.setPoint(i, j);

	s1.display();
}