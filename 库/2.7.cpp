#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	for (x = 5, y = 0; y < x; y++)
	{
		for (z = 0; z <= y; z++)
		{
			cout << '*' ;
		}
		cout << endl;
	}
	return 0;

}