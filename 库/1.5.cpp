#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "�����뻪���¶�" << endl;
	cin >> a;
	b = (a - 32) * 5 / 9;
	cout << "�����¶�Ϊ" <<fixed<< setprecision(2)<<b << endl;
	return 0;
}