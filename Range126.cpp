#include <iostream>
using namespace std;

int main() {
	float x1 = 5, x2;

	cout << "x1 = " << x1 << endl;
	cout << endl << "Where is x2?" << endl;
	cin >> x2;

	if (x2 <= x1 - 5 || x2 >= x1 + 5)
	{
		cout << "Too far away..." << endl;
	}
	else
	{
		cout << "With in 5 units from x1";
	}
	int x;
	cin>>x;
	return 0;
}