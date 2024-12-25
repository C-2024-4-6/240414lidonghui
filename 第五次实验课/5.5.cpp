#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	
public:
	void setPoint(int i, int j)		//修改坐标值函数
	{
		x = 60 + i;
		y = 80 + j;
	}

	void creatPoint()		//初始化对象函数
	{
		x = 60;
		y = 80;
	}

	void display()			//输出坐标值函数
	{
		cout << "坐标值" << '(' << x << ',' << y << ')' << endl;
	}
};

int main()
{
	Point s1;
	s1.creatPoint();

	int i, j;
	cout << "请输入修改的坐标值x，y" << endl;
	cin >> i >> j;
	s1.setPoint(i, j);

	s1.display();
}