#pragma once
//student.h
class Student
{
public:                   //���ó�Ա����ԭ������
	void display();

	void set_value();

	void studl(int setnum,const char setname[20], char setsex);

private:
	int num;
	 char name[20];
	char sex;

};