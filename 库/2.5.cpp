#include<iostream>
using namespace std;
int main()
{
	char characters;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

	cout<< "请输入一串字符" << endl;
    while (cin.get(characters)) 
    {
        if (characters == '\n') 
        {
            break;
        }

        if ((characters >= 'a' && characters <= 'z') || (characters >= 'A' && characters <= 'Z')) 
        {
            a++;
        }
        else if (characters == ' ') 
        {
            b++;
        }
        else if (characters >= '0' && characters <= '9') 
        {
            c++;
        }
        else {
            d++;
        }
    }

    cout << "英文字母个数：" << a << endl;
    cout << "空格个数：" << b << endl;
    cout << "数字字符个数：" << c << endl;
    cout << "其它字符个数：" << d << endl;

}