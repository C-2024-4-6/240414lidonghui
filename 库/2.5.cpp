#include<iostream>
using namespace std;
int main()
{
	char characters;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

	cout<< "������һ���ַ�" << endl;
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

    cout << "Ӣ����ĸ������" << a << endl;
    cout << "�ո������" << b << endl;
    cout << "�����ַ�������" << c << endl;
    cout << "�����ַ�������" << d << endl;

}