#include <iostream>

using namespace std;

// Print out the menu of choices for the user to select from
void printmenu() {
	cout << "Please Select which operation to preform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

void factorial() {
	int Number;
	int Apple;
	long Pineapple = 1;

	cout << "Factorial" << endl;
	cout << "Please enter a number: ";
	cin >> Number;

	if (Number < 1) {
	cout << "IDIOT. That won't work." << endl;
	}

	else {
		for (Apple = 1; Apple <= Number; ++Apple) {
			Pineapple *= Apple;
			if (Apple != 1) {
				cout << " * ";
			}
			cout << Number + (1 - 1 * Apple);
		}
		cout << " = " << Pineapple << endl;
	}

}

void arithmetic() {
	int Number;
	int Difference;
	int Element;
	int Apple;
	int Pineapple;

	cout << "What is the starting number?" << endl;
	cin >> Number;
	cout << "What is the difference?" << endl;
	cin >> Difference;
	cout << "What is the number of Elements?" << endl;
	cin >> Element;

	if (Element < 1) {
		cout << "IDIOT. That won't work." << endl;
	}

	else {
		Pineapple = 0;
		for (Apple = 1; Apple <= Element; ++Apple) {
			Pineapple = Pineapple + Number;
			if (Apple != 1) {
				cout << " + ";
			}
			cout << Number;
			Number = Number + Difference;
		}
		cout << endl;
		cout << "The Answer is: " << Pineapple << endl;
	}
}

void geometric() {
	int Number;
	int a;
	int Element;
	int Apple; //r
	int Pineapple;
	int Pear;

	cout << "What is the starting number?" << endl;
	cin >> Number;
	cout << "What is the value of a?" << endl;
	cin >> a;
	cout << "What is the number of Elements?" << endl;
	cin >> Element;

	if (Element < 1) {
		cout << "IDIOT. That won't work." << endl;
	}

	else {
		Pear = 0;
		for (Apple = 1; Apple <= Element; ++Apple) {
			Pineapple = Number * pow(a, Apple - 1);
			if (Apple != 1) {
				cout << " + ";
			}
			cout << Number * pow(a, Apple - 1);
			Pear = Pear + Pineapple;
		}
		cout << endl;
		cout << "The Answer is: " << Pear << endl;
	}
}

int main() {
	int choice;
	char again;

	do {
		printmenu();
		cin >> choice;

		if (choice > 3 || choice < 1) {
			return 0;
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

		cout << "Go Again? [Y/N]" << endl;
		cin >> again;
		cout << endl;
	
	} while (again == 'y' || again == 'Y');
}