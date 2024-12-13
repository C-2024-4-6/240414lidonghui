#include<iostream>
using namespace std;

bool is_prime(int num)			//ÅÐ¶ÏËØÊýµÄº¯Êý
{
	if (num > 2)
	{
		for (int num1 = 2; num1 < num; )
		{
			int num2;
			num2 = num % num1;
			if (num2 == 0)
			{
				return false;
			}
			num1++;
		}
		return true;
	}
	else
	{
		return true;
	}
}

int main() 
{
	int array[200] = { 0 };
	int i = 0;
	for (int num1 = 1; array[199] == 0; num1++)
	{
		bool num2 = is_prime(num1);
		if (num2 != false)
		{
			array[i] = num1;
			i++;
		}
		
	}
	int j = 0;
	do
	{
		cout << array[j];
		j++;
			if (j % 10 == 0)
			{
				cout << endl;
			}
			else
			{

				cout << "  ";
			}
	} while (j <= 199);
	
	return 0;
}