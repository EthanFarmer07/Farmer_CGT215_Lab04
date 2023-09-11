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
	int posNumber; // Holder for user submited number.
	float factorial = 1.0; // Used for starting factoral calculation.

	cout << "Factorial:\n";
	cout << "Enter a positive number: ";
	cin >> posNumber;
	
	// If statment to check if the number is less than 1.
	if (posNumber < 0) {
		cout << "Error! You have entered a negative number.\n";
		cout << "Factorials of a negative number do not exist.\n";
	}
	else if (posNumber == 0 || posNumber == 1) {
		cout << posNumber << "! is = 1\n";
	}
	else if (posNumber > 1) {
		// Calculation of the factoral number.
		cout << posNumber << "! = ";
		for (int i = 1; i <= posNumber; ++i) {
			factorial *= i;
			cout << i << " * ";
		}
		cout << "= " << factorial << "\n";
	}
	
}
void arithmetic() {
	// I recommend writing your arithmetic series code here
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
		cout << "Chose Again? [Y/N] ";
		cin >> again;
		cout << "\n";
	} while (again == 'y' || again == 'Y');
}