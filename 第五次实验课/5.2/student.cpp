//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include"student.h"            //不要漏写此行，否则编译通不过
using namespace std;


void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex：" << sex << endl;
}

void Student::set_value()       //在类外定义set_value类函数
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