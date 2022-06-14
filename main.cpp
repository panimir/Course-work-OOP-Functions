#include <exception>
#include <iostream>
#include <string>

#include "classes/Cos.h"
#include "classes/Linear.h"
#include "classes/Power.h"
#include "classes/Sin.h"

using namespace std;

void linearBranch();
void powerBranch();
void sinBranch();
void cosBranch();
char firstChoise();
char secondChoise();

int main()
{
	system("clear");
	char pr = 'x';
	while (pr != '0') {
		pr = firstChoise();
		switch (pr) {
		case '1':
			linearBranch();
			break;
		case '2':
			powerBranch();
			break;
		case '3':
			sinBranch();
			break;
		case '4':
			cosBranch();
			break;
		}
	}
	return 0;
}

char firstChoise()
{
	char pr;
	cout << "Which function do you want to create?\n"
		 << "1. Linear \n"
		 << "2. Power \n"
		 << "3. Sin \n"
		 << "4. Cos \n"
		 << "0. Exit \n"
		 << "=> ";
	cin >> pr;
	return pr;
}

char secondChoise()
{
	char pr;
	cout << "What do you want to do next? \n"
		 << "1. Print funciton \n"
		 << "2. Print function info \n"
		 << "3. Find derivative \n"
		 << "4. Calculate function \n"
		 << "0. Create anothe function \n"
		 << "=> ";
	cin >> pr;
	return pr;
}

void linearBranch()
{
	int s, c;
	cout << "Type slope and coefficient for linear funciton.\n=> ";
	cin >> s >> c;
	Linear linear(s, c);
	cout << "The function is: ";
	cout << linear.printFunc() << '\n';
	char pr = 'x';
	while (pr != '0') {
		pr = secondChoise();
		switch (pr) {
		case '1':
			cout << linear.printFunc() << '\n';
			break;
		case '2':
			cout << linear.info() << '\n';
			break;
		case '3':
			cout << linear.deriv() << '\n';
			break;
		case '4':
			int x;
			cout << "Type value for 'x'.\n=> ";
			cin >> x;
			cout << linear.calc(x) << '\n';
			break;
		}
	}
	system("clear");
}

void powerBranch()
{
	int s, c, d;
	cout << "Type slope, coefficient and degree for funciton.\n=> ";
	cin >> s >> c >> d;
	Power power(s, c, d);
	cout << "The function is: ";
	cout << power.printFunc() << '\n';
	char pr = 'x';
	while (pr != '0') {
		pr = secondChoise();
		switch (pr) {
		case '1':
			cout << power.printFunc() << '\n';
			break;
		case '2':
			cout << power.info() << '\n';
			break;
		case '3':
			cout << power.deriv() << '\n';
			break;
		case '4':
			int x;
			cout << "Type value for 'x'.\n=> ";
			cin >> x;
			cout << power.calc(x) << '\n';
			break;
		}
	}
	system("clear");
}

void sinBranch()
{
	int v;
	cout << "Type value for sin.\n=> ";
	cin >> v;
	Sin sin(v);
	cout << "The function is: ";
	cout << sin.printFunc() << '\n';
	char pr = 'x';
	while (pr != '0') {
		pr = secondChoise();
		switch (pr) {
		case '1':
			cout << sin.printFunc() << '\n';
			break;
		case '2':
			cout << sin.info() << '\n';
			break;
		case '3':
			cout << sin.deriv() << '\n';
			break;
		case '4':
			cout << sin.calc(v) << '\n';
			break;
		}
	}
	system("clear");
}

void cosBranch()
{
	int v;
	cout << "Type value for cos.\n=> ";
	cin >> v;
	Cos cos(v);
	cout << "The function is: ";
	cout << cos.printFunc() << '\n';
	char pr = 'x';
	while (pr != '0') {
		pr = secondChoise();
		switch (pr) {
		case '1':
			cout << cos.printFunc() << '\n';
			break;
		case '2':
			cout << cos.info() << '\n';
			break;
		case '3':
			cout << cos.deriv() << '\n';
			break;
		case '4':
			cout << cos.calc(v) << '\n';
			break;
		}
	}
	system("clear");
}
