#include <iostream>
#include <string>
using namespace std;

// Input/Output functions

string GetHindi(string english)
{
	if (english == "cat")
	{
		return "billee";
	}
	else if (english == "dog")
	{
		return "kutta";
	}
	else if (english == "frog")
	{
		return "medhak";
	}
	else if(english=="rabbit")
	{
		return "khargosh";
	}
	else
	{
		return "word Not found";
	}
}

string GetEnglish(string hindi)
{
	if (hindi=="billee")
	{
		return "cat";
	}
	else if (hindi == "kutta") { return "dog"; }
	else if (hindi == "medhak") { return "rabbit"; }
	else if (hindi == "khargosh") { return "rabbit"; }
	else { return "word not found"; }
}

// Menu functions

void DisplayMenu()
{
	cout <<endl<<endl << "1.English to Hindi" << endl;
	cout << "2.Hindi to English" << endl;
	cout << "3.Quit" << endl;
}

void EnglishToHindi()
{
	string english;
	
	cout << "English:";
	cin >> english;
	
	cout << "Hindi:" << GetHindi(english)<<endl;

}

void HindiToEnglish()
{
	string hindi;
	
	cout << "Hindi:";
	cin >> hindi;
	cout << "English:" << GetEnglish(hindi) << endl;
}


int main()
{
	bool exit = true;
	while (exit)
	{
		DisplayMenu();
		int x;
		cin >> x;
		if (x == 1)
		{
			EnglishToHindi();
		}
		else if (x == 2)
		{
			HindiToEnglish();
		}
		else
		{
			exit = false;
		}

	}
	return 0;
}