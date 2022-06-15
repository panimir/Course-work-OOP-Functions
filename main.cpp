#include <exception>
#include <iostream>
#include <string>

#include "classes/Cos.hpp"
#include "classes/Linear.hpp"
#include "classes/Oper.hpp"
#include "classes/Power.hpp"
#include "classes/Sin.hpp"

void linearBranch();
void powerBranch();
void sinBranch();
void cosBranch();
void sumBranch();
void multBranch();
void divBranch();
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
		case '5':
			sumBranch();
			break;
		case '6':
			multBranch();
			break;
		case '7':
			divBranch();
			break;
		}
	}
	system("clear");
	return 0;
}

char firstChoise()
{
	char pr;
	std::cout << "What do you want to do?\n"
			  << "1. Make linear function \n"
			  << "2. Make power function \n"
			  << "3. Make sin function \n"
			  << "4. Make cos function \n"
			  << "5. Calculate sum of functions \n"
			  << "6. Calculate multiplication of functions \n"
			  << "7. Calculate difference of functions \n"
			  << "0. Exit \n"
			  << "=> ";
	std::cin >> pr;
	return pr;
}

char secondChoise()
{
	char pr;
	std::cout << "What do you want to do next? \n"
			  << "1. Print funciton \n"
			  << "2. Print function info \n"
			  << "3. Find derivative \n"
			  << "4. Calculate function \n"
			  << "0. Create another function \n"
			  << "=> ";
	std::cin >> pr;
	return pr;
}

void linearBranch()
{
	int s, c;
	std::cout << "Type slope and coefficient for linear funciton.\n=> ";
	std::cin >> s >> c;
	Linear linear(s, c);
	std::cout << "\n=> The function is: ";
	std::cout << linear.printFunc() << '\n' << '\n';
	char pr = 'x';
	while (pr != '0') {
		pr = secondChoise();
		switch (pr) {
		case '1':
			std::cout << "\n=> " << linear.printFunc() << '\n' << '\n';
			break;
		case '2':
			std::cout << "\n=> " << linear.info() << '\n' << '\n';
			break;
		case '3':
			std::cout << "\n=> " << linear.deriv() << '\n' << '\n';
			break;
		case '4':
			int x;
			std::cout << "Type value for 'x'.\n=> ";
			std::cin >> x;
			std::cout << "\n=> " << linear.calc(x) << '\n' << '\n';
			break;
		}
	}
	system("clear");
}

void powerBranch()
{
	int s, c, d;
	std::cout << "Type slope, coefficient and degree for funciton.\n=> ";
	std::cin >> s >> c >> d;
	Power power(s, c, d);
	std::cout << "\n=> "
			  << "The function is: ";
	std::cout << power.printFunc() << '\n' << '\n';
	char pr = 'x';
	while (pr != '0') {
		pr = secondChoise();
		switch (pr) {
		case '1':
			std::cout << "\n=> " << power.printFunc() << '\n' << '\n';
			break;
		case '2':
			std::cout << "\n=> " << power.info() << '\n' << '\n';
			break;
		case '3':
			std::cout << "\n=> " << power.deriv() << '\n' << '\n';
			break;
		case '4':
			int x;
			std::cout << "Type value for 'x'.\n=> ";
			std::cin >> x;
			std::cout << "\n=> " << power.calc(x) << '\n' << '\n';
			break;
		}
	}
	system("clear");
}

void sinBranch()
{
	int v;
	std::cout << "Type value for sin.\n=> ";
	std::cin >> v;
	Sin sin(v);
	std::cout << "\n=> "
			  << "The function is: ";
	std::cout << sin.printFunc() << '\n' << '\n';
	char pr = 'x';
	while (pr != '0') {
		pr = secondChoise();
		switch (pr) {
		case '1':
			std::cout << "\n=> " << sin.printFunc() << '\n' << '\n';
			break;
		case '2':
			std::cout << "\n=> " << sin.info() << '\n' << '\n';
			break;
		case '3':
			std::cout << "\n=> " << sin.deriv() << '\n' << '\n';
			break;
		case '4':
			std::cout << "\n=> " << sin.calc(v) << '\n' << '\n';
			break;
		}
	}
	system("clear");
}

void cosBranch()
{
	int v;
	std::cout << "Type value for cos.\n=> ";
	std::cin >> v;
	Cos cos(v);
	std::cout << "\n=> "
			  << "The function is: ";
	std::cout << cos.printFunc() << '\n' << '\n';
	char pr = 'x';
	while (pr != '0') {
		pr = secondChoise();
		switch (pr) {
		case '1':
			std::cout << "\n=> " << cos.printFunc() << '\n' << '\n';
			break;
		case '2':
			std::cout << "\n=> " << cos.info() << '\n' << '\n';
			break;
		case '3':
			std::cout << "\n=> " << cos.deriv() << '\n' << '\n';
			break;
		case '4':
			std::cout << "\n=> " << cos.calc(v) << '\n' << '\n';
			break;
		}
	}
	system("clear");
}

void sumBranch()
{
	Oper oper;
	std::string f1, f2;
	std::cout << "Type f1(x) = ";
	std::cin >> f1;
	std::cout << "Type f2(x) = ";
	std::cin >> f2;
	std::cout << "\n=> "
			  << "f1(x)+f2(x) = " << oper.getSum(f1, f2) << '\n'
			  << '\n';
}

void multBranch()
{
	Oper oper;
	std::string f1, f2;
	std::cout << "Type f1(x) = ";
	std::cin >> f1;
	std::cout << "Type f2(x) = ";
	std::cin >> f2;
	std::cout << "\n=> "
			  << "f1(x)*f2(x) = " << oper.getMult(f1, f2) << '\n'
			  << '\n';
}

void divBranch()
{
	std::string f1, f2;
	std::cout << "Type f1(x) = ";
	std::cin >> f1;
	std::cout << "Type f2(x) = ";
	std::cin >> f2;
	Oper of1(f1);
	Oper of3 = of1 - f2;
	std::cout << "\n=> "
			  << "f1(x)-f2(x) = " << of3.getStr() << '\n'
			  << '\n';
}
