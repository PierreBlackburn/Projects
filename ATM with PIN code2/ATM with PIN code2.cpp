#include <iostream>
#include <fstream>
using namespace std;


//hold a balance, be able to deposit and withdraw, have a display
double balance = 500, deposit, withdraw;
int option;


void display() {
	cout << "********** ATM **********" << endl;
	cout << "1. Display balance" << endl;
	cout << "2. Deposit money" << endl;
	cout << "3. Withdraw money" << endl;
	cout << "4. close ATM" << endl;
	cout << "********** ATM **********" << endl;


}





int main() {

	int usersPin = 1234; // the correct pin number
	int pin; // this is the pin that the user enters#
	int errorCounter = 0; // this is the ammoutn of errors the user has made 


	do {
		cout << "Enter a PIN: ";
		cin >> pin;
		if (pin != usersPin)
			errorCounter++;

	} while (errorCounter < 3 && pin != usersPin); // means the loop will restart if attempt number is less than 3 AND the pin was entered wrong
	// here we want to see which out of the two reasons the loop was stopped
	if (errorCounter < 3) {
		system("cls");
		cout << "PIN entered correctly\n"; // if the error counter is STILL less than 3 it means the loop stopped because the other condition (the PIN being wrong) was not met aka, they got the PIN right.
		do {
			display();
			cin >> option;
			system("cls");
			switch (option) {
			case 1: cout << "Balance is: " << balance << endl; break;
			case 2: cout << "Deposit amount: ";
				cin >> deposit;
				balance += deposit; break;
			case 3: cout << "Withdraw amount: ";
				cin >> withdraw;
				if (withdraw <= balance)
					balance -= withdraw;
				else
					cout << "You dont have enough money to withdraw: " << withdraw << " you only have: " << balance << endl; break;

			case 4: option = 4; break;
			}
		} while (option != 4);
	}
	else
		cout << "you entered your PIN incorrectly too many times, get blocked lol\n";


	system("pause>0");
}

