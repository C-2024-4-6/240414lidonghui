#include<iostream>
using namespace std;

class cuboid
{
public:
	float length;
	float width;
	float height;

	int ask()		//������ĳ�Ա����
	{
		float volume;
		volume = length * width * height;
		return volume;
	}
};

int main()
{
	cuboid c1;			//�������
	cuboid c2;
	cuboid c3;

	cout << "�������һ��������ĳ�������" << endl;
	cin >> c1.length >> c1.width >> c1.height;
	
	cout << "������ڶ���������ĳ�������" << endl;
	cin >> c2.length >> c2.width >> c2.height;

	cout << "�����������������ĳ�������" << endl;
	cin >> c3.length >> c3.width >> c3.height;

	cout << "��һ������������Ϊ��" << c1.ask ()<< endl;
	cout << "�ڶ�������������Ϊ��" << c2.ask ()<< endl;
	cout << "����������������Ϊ��" << c3.ask ()<< endl;
	return 0;
}