#include <iostream>

using namespace std;

int main() {

	// Declaring Variables
	char calculator;
	int firstNumber, secondNumber;

	// Declaring Input
	cout << "Enter First Number to Calculate: ";
	cin >> firstNumber;

	cout << "" << endl;

    cout << "Select and Enter an Operators ( +, -, *, /,  ) :";
	cin >> calculator;

	cout << "" << endl;

	if (calculator != '+' && calculator != '-' && calculator != '*' && calculator != '/') {
		cout << "Invalid Operators! ";
		return 0;
	} 
	
	cout << "" << endl;

	cout << "Enter Second Number to Calculate: ";
	cin >> secondNumber;

	cout << "" << endl << endl;

	// Decalaring Conditions
	if (calculator == '+') {
		cout << "Result: " << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber;
	}
	else if (calculator == '-') {
		cout << "Result: " << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber;
	}
	else if (calculator == '*') {
		cout << "Result: " << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber;
	}
	else if (calculator == '/') {
		if (secondNumber != 0) {
			cout << "Result: " << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber;
		}
		else {
			cout << "Cannot Divide by Zero! ";
		}
	}

	cout << "" << endl;
	
	return 0;
}