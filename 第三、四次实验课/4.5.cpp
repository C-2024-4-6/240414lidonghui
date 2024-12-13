#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int n1 = strlen(s1);		//Çó×Ö·û´®ÖÐ×Ö·û¸öÊý
	int n2 = strlen(s2);

	for (int i = 0; i <= n2 - n1; i++)		//ÅÐ¶Ï×Ö·û´®s1ÊÇ·ñÎª×Ö·û´®s2µÄ×Ó´®
	{
		int j = 0;
		for (; j < n1; ++j) 
		{
			if (s2[i + j] != s1[j]) 
			{
				break;
			}
		}
		if (j == n1) 
		{
			return i;
		}
	}
	return -1;
}



int main()
{
	char s1[100];
	char s2[100];
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®" << endl;
	cin.getline(s1, 100);
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®" << endl;
	cin.getline(s2, 100);
	int n = indexOf(s1, s2);
	cout << n << endl;
}