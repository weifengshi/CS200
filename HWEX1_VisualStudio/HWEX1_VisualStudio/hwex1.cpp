#include <iostream>     // input/output commands
using namespace std;    // standard library

int main()              // program entry function
{
	// Variable declarations
	float width;
	float length;
	float area;
	float perimeter;


	// Get user input:
	cout << "ROOM CALCULATOR" << endl;
	cout << endl;
	cout << "Room 1" << endl;
	cout << endl;

	cout << "Enter the width: ";        // text output
	cin >> width;                       // input from the user
	cout << "Enter the length: ";
	cin >> length;
	cout << endl;                       // empty line

	area = width * length;              // assignment statement
										// Display results:
	cout << "Area: " << area << endl;
	perimeter = 2 * width + 2 * length;
	cout << "Perimeter:" << perimeter << endl;
	cout << endl;

	cout << "Room 2" << endl;
	cout << endl;

	cout << "Enter the width:";
	cin >> width;
	cout << "Enter the length:";
	cin >> length;
	cout << endl;

	area = width*length;
	cout << "Area:" << area << endl;
	perimeter = 2 * width + 2 * length;
	cout << "Perimeter:" << perimeter << endl;

	while (true);
return 0;          // end of program

}
 