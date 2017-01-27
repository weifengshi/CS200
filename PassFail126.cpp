#include <iostream>
#include <string>
using namespace std;

int main()
{
	float studentPoints, totalPoints;

	cout << "What was your score? ";
	cin >> studentPoints;

	cout << "What was the total points? ";
	cin >> totalPoints;

	float percent;
	percent = (studentPoints / totalPoints) * 100;

	cout << "Score: " << percent << "% \t\t\t\t\t\t\t\t\t";

	if (percent >= 70)
	{
		cout << "Pass" << endl;
	}
	else
	{
		cout << "Fail" << endl;
	}

	int x;
	cin >> x;
	return 0;
}