#include <iostream>
#include <string>
using namespace std;

// Declare function here
float CountChange(int quarters, int dimes, int nickels, int pennies)
{
	float output = quarters*.25 + dimes*.1 + nickels*.05 + pennies*.01;
	return output;
}
int main()
{

	while (true)
	{
		int quarters, dimes, nickels, pennies;

		cout << "How many quarters? ";
		cin >> quarters;

		cout << "How many dimes? ";
		cin >> dimes;

		cout << "How many nickels? ";
		cin >> nickels;

		cout << "How many pennies? ";
		cin >> pennies;

		float money = CountChange(quarters, dimes, nickels, pennies);
		cout << "Money: $" << money << endl;

		cout << endl << endl;
	}

	return 0;
}