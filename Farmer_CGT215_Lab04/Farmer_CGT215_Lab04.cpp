// Farmer_CGT215_Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
 void factorial() {
	int posNumber; // Variable holder for user submited number.
	float factorial = 1.0; // Used for starting factoral calculation.
	/*
	* Done is a variable to stop the while loop after acceptable user input is given. 
	* I could not figure out how to stop the loop using posNumber (the user asigned number).
	* So we have an extra variable.
	*/
	int done = 0;

	cout << "Factorial:\n";
	cout << "Enter a positive number: ";
	cin >> posNumber;
	do {
		// Checks if number is within acceptable range.
		if (posNumber > 1) {
			// Calculation of the factoral number.
			for (int i = 1; i <= posNumber; ++i) {
				factorial *= i;
				cout << i << " * ";
			}
			cout << posNumber << "! = ";
			cout << "= " << factorial << "\n";
			done = 1;
		}
		else if (posNumber == 0 || posNumber == 1) {
			cout << posNumber << "! is = 1\n";
			done = 1;
		}
		else if (posNumber < 0) {
			cout << "Error! You have entered a negative number.\n";
			cout << "Factorials of a negative number do not exist.\n";
			cout << "Enter a positive number: ";
			cin >> posNumber;
		}
	} while (done != 1);
}
void arithmetic() {
	int startNumber; // User asigned number for starting.
	int incrementNumber; // User asigned number for calculating difference.
	int seriesNumber; // User asigned number for how many iterations.

	cout << "Arithmetic Series:\n";
	cout << "Enter a number to start from: ";
	cin >> startNumber;
	cout << "Enter a number to start from: ";
	cin >> incrementNumber;
	cout << "Enter a number to start from: ";
	cin >> seriesNumber;
}
void geometric() {
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Outputs message for any invalid choice. Then prompts the user to chose again.
		if (choice > 4 || choice < 1) {
			cout << "Invalid input recieved!\n";
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		else if (choice == 4) {
			return 0;
		}
		cout << "\nChose Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}