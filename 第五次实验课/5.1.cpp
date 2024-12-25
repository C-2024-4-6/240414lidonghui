#include<iostream>
using namespace std;

class Time			//定义Time类
{

public:							//因为Time类数据成员为私有，需利用成员函数输入和输出数据

	void sethour(int sethour)			//输入hour
	{
		hour = sethour;
	}

	void setminute(int setminute)		//输入minute
	{
		minute = setminute;
	}

	void setsec(int setsec)				//输入sec
	{
		sec = setsec;
	}

	int printhour()						//获取hour
	{
		return hour;
	}

	int printminute()					//获取minute
	{
		return minute;
	}

	int printsec()						//获取sec
	{
		return sec;
	}

private:
	int hour;
	int minute;
	int sec;
};

int main()
{
	Time t1;			//定义t1为Time类对象
	int hour, minute, sec;

	cin >> hour;
	cin >> minute;
	cin >> sec;
	t1.sethour(hour);			//利用成员函数输入数据	
	t1.setminute(minute);
	t1.setsec(sec);

	cout << t1.printhour() << ":" << t1.printminute() << ":" << t1.printsec() << endl;

	return 0;
}
