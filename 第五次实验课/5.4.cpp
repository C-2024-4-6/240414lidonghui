#include<iostream>
using namespace std;

class Student
{
public:
	int id;
	int score;
	Student(int i, int s) : id(i), score(s) {}
};

void Max(Student * arr)
{
	for (int i = 0; i < 4; ++i)
	{
		if (arr[i].score > arr[i + 1].score)
		{
			arr[i + 1].id = arr[i].id;
			arr[i + 1].score = arr[i].score;
		}
	}
	cout << arr[4].id << endl;
}

int main()
{
	Student arr[5] =
	{
		Student(240401,77),
		Student(240402,88),
		Student(240403,89),
		Student(240404,99),
		Student(240405,60)
	};
	Max(arr);
	return 0;
}
