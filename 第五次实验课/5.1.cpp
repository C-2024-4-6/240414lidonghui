#include<iostream>
using namespace std;

class Time			//����Time��
{

public:							//��ΪTime�����ݳ�ԱΪ˽�У������ó�Ա����������������

	void sethour(int sethour)			//����hour
	{
		hour = sethour;
	}

	void setminute(int setminute)		//����minute
	{
		minute = setminute;
	}

	void setsec(int setsec)				//����sec
	{
		sec = setsec;
	}

	int printhour()						//��ȡhour
	{
		return hour;
	}

	int printminute()					//��ȡminute
	{
		return minute;
	}

	int printsec()						//��ȡsec
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
	Time t1;			//����t1ΪTime�����
	int hour, minute, sec;

	cin >> hour;
	cin >> minute;
	cin >> sec;
	t1.sethour(hour);			//���ó�Ա������������	
	t1.setminute(minute);
	t1.setsec(sec);

	cout << t1.printhour() << ":" << t1.printminute() << ":" << t1.printsec() << endl;

	return 0;
}
