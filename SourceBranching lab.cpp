#include <iostream>
#include <string>
using namespace std;


int main()
{
	string homeTown;

	cout << "What is your home town?";
	cin >> homeTown;

	if (homeTown.size()>6)
	{
		cout << endl << "That's a long name!";
	}

	cout <<endl << "What's your name?";
	string name;
	cin >> name;

	cout <<"Hello, " << name << " is from " << homeTown << "!";

		int x;
	cin >> x;
	return 0;
}