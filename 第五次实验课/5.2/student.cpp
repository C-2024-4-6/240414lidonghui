//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"            //��Ҫ©д���У��������ͨ����
using namespace std;


void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex��" << sex << endl;
}

void Student::set_value()       //�����ⶨ��set_value�ຯ��
{
    num = 0;
}

void Student::studl(int setnum,const char setname[20], char setsex)
{
    num = setnum;
    for (int i = 0; i < 20; i++)
    {
        name[i] = setname[i];
    }
    sex = setsex;
}