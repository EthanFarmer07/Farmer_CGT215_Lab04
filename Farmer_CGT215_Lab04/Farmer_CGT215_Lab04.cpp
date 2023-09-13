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
			cout << posNumber << "! = ";
			// Calculation of the factoral number.
			for (int i = 1; i <= posNumber; ++i) {
				factorial *= i;
				cout << i;
				if (i < posNumber ) {
					cout << " * ";
				}
			}
			cout << " = " << factorial << "\n";
			done = 1;
		}
		// Error handling for if the number is 0 or 1.
		else if (posNumber == 0 || posNumber == 1) {
			cout << posNumber << "! is = 1\n";
			done = 1;
		}
		// Error handling for if the number is a negative.
		else if (posNumber < 0) {
			cout << "Error! You have entered a negative number.\n";
			cout << "Factorials of a negative number do not exist.\n";
			cout << "Enter a positive number: ";
			cin >> posNumber;
		}
	} while (done != 1); // Used if the user enterd number is negative.
}

// Get math to acctually add the series.
void arithmetic() {
	int startNumber; // User asigned number for starting.
	int incrementNumber; // User asigned number for calculating difference.
	int seriesNumber; // User asigned number for how many iterations.
	int holder; // Used for storing the running total.

	// Asks user for input.
	cout << "Arithmetic Series:\n";
	cout << "Enter a number to start from: ";
	cin >> startNumber;
	cout << "Enter a number to add each time: ";
	cin >> incrementNumber;
	cout << "Enter a number of elements in the series: ";
	cin >> seriesNumber;

	// Print the starting number for showing the series.
	cout << startNumber << " + ";
	// Runs the calculations for returning an answer.
	for (int i = 0; i < (seriesNumber - 1); ++i) {
		startNumber += incrementNumber;
		holder = holder + startNumber;
		cout << startNumber;
		if (i < seriesNumber) {
			cout << " + ";
		}
	}
	cout << " = " << holder;
}
void geometric() {
	float sum = 0; // Total number after calculations.
	float a; // First term in series.
	float r; // Common ratio.
	int seriesNumber; // User asigned number for how many iterations.
	
	// Asks user for input.
	cout << "Arithmetic Series:\n";
	cout << "Enter a number for first term: ";
	cin >> a;
	cout << "Enter a number as the commmon ratio: ";
	cin >> r;
	cout << "Enter a number of elements in the series: ";
	cin >> seriesNumber;
	
	cout << a << " + ";
	for (int i = 0; i < seriesNumber; ++i) {
		
		sum = sum * pow(r,i);
		a = a + r;

		if (i < seriesNumber) {
			cout << " + ";
		}
	}
	cout << sum + a;
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