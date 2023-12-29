/*
Project Name: Console Calculator

Description: This would be a Easy to Med level assignment (Possibly an final project), given to a college student. 
This should only be used for educational purposes.
Computer Science 101 (Maybe Intermid Level)


Created by Wiz
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void display();
void operationPick(int choice, float x, float y);

void add(float x, float y);
void sub(float x, float y);
void multiply(float x, float y);
void div(float x, float y);
void mod(float x, float y);

int main()
{	

	display();

	return 0;
}
void display()
{

	float x, y;
	bool repeat = true;
	int symbol;
	string word;


	do
	{
		cout << "Console Calculator!\n";
		cout << "_______________\n";
		cout << "1: +\n";
		cout << "2: -\n";
		cout << "3: *\n";
		cout << "4: /\n";
		cout << "5: %\n";


		cout << "Please enter two numbers for operation: ";
		
		//Input Validation
		while (!(cin >> x) || !(cin >> y))
		{
			cout << "Error: Enter a two number:";
			// Clear Bad Input
			cin.clear();
			cin.ignore(123, '\n');
		}

		cout << "Please enter the corresponding number for operation: ";

		while (!(cin >> symbol))
		{
			cout << "Error: Enter the number from the list: ";
			cin.clear();
			cin.ignore(123, '\n');
		}

		operationPick(symbol, x, y);
		cin.ignore();

		cout << "Proceed to next problem? (Type anything or Exit): ";
		getline(cin, word);

		if (word == "Exit" || word == "exit")
		{
			repeat = false;
		}
		else
		{
			system("cls"); // OS Specific - Will not work if used on another system
		}

	} while (repeat);


}
void operationPick(int choice, float x, float y)
{

	switch (choice)
	{
	case 1:
		add(x, y);
		break;
	case 2:
		sub(x, y);
		break;
	case 3:
		multiply(x, y);
		break;
	case 4:
		if (y == 0)
		{
			cout << "Cannot divide by zero!\n";
		}
		else
		{
			div(x, y);
		}
		break;
	case 5:
		mod(x, y);
		break;
	}

}
void add(float x, float y)
{
	cout << "Answer: " << x << " + " << y << " = " << x + y << endl;
}
void sub(float x, float y)
{
	cout << "Answer: " << x << " - " << y << " = " << x - y << endl;
}
void multiply(float x, float y)
{
	cout << "Answer: " << x << " x " << y << " = " << x * y << endl;
}
void div(float x, float y)
{
	cout << "Answer: " << x << " / " << y << " = " << x / y << endl;
}
void mod(float x, float y)
{
	cout << "Answer: " << x << " Mod " << y << " = " << (int)x % (int) y << endl; // Reasoning - You can't use mod with double/float
}
