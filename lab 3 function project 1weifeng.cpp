#include <iostream>
using namespace std;

// Input: A percent value (0% - 100%, no percent sign though)
// Output: The decimal equivalent (0.0 - 1.0)
float PercentToDecimal(float percent)
{
	float decimal = percent / 100;
	return decimal;
}

int main()
{
	float a, b, c;
	a = PercentToDecimal(50);
	b = PercentToDecimal(0.125);
	c = PercentToDecimal(99.99);

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl;

	return 0;
}