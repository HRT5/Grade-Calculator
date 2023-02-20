#include <iostream>

using namespace std;

float grades[6];
float sum, grade;

int main()
{
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter your " << i + 1 << " grade: " << endl;
		cin >> grades[i];

		sum += grades[i];
		grade = sum / 6;
		
	}

	cout << "Your average grade is " << grade << endl;






}