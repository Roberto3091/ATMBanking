/*
 * main.cpp
 *
 *  Created on: Apr 30, 2021
 *      Author: Roberto Soto II
 */

#include <iostream>
using namespace std;
int main() {
	double balance, withdraw, deposit;
	balance = 0;
	int input;

	cout <<"1. To display your current balance. \n"
		 <<"2. To deposit money into your account. \n"
	     <<"3. To withdraw money from your account. \n"
	     <<"4. Type -1 to exit. \n"
	     << "Select an option to continue. ";
	cin >> input;

	while(input!= -1){
		switch (input) {
		case 1: cout << "The current balance you have in your account is $" << balance << endl;
		break;
		case 2: cout << "Enter the amount you are depositing into your account: ";
		cin>>deposit;
		balance = balance + deposit;
		cout << "You have deposited $" << deposit << " into your account." << endl;
		break;
		case 3: cout << "Enter the amount you want to withdraw from your account: ";
		cin >> withdraw;
		balance = balance - withdraw;
		cout << "You have withdrawn $" << withdraw << " from your account." << endl;
		break;
		default: cout << "You have entered an incorrect input" << endl;
		}
		cout << "Enter choice: ";
		cin >> input;
	}
}


