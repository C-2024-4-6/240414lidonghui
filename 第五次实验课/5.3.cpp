#include<iostream>
using namespace std;

class cuboid
{
public:
	float length;
	float width;
	float height;

	int ask()		//求体积的成员函数
	{
		float volume;
		volume = length * width * height;
		return volume;
	}
};

int main()
{
	cuboid c1;			//定义对象
	cuboid c2;
	cuboid c3;

	cout << "请输入第一个长方体的长，宽，高" << endl;
	cin >> c1.length >> c1.width >> c1.height;
	
	cout << "请输入第二个长方体的长，宽，高" << endl;
	cin >> c2.length >> c2.width >> c2.height;

	cout << "请输入第三个长方体的长，宽，高" << endl;
	cin >> c3.length >> c3.width >> c3.height;

	cout << "第一个长方体的体积为：" << c1.ask ()<< endl;
	cout << "第二个长方体的体积为：" << c2.ask ()<< endl;
	cout << "第三个长方体的体积为：" << c3.ask ()<< endl;
	return 0;
}