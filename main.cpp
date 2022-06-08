#include <iostream>
#include <string>

//#include "classes/Function.h"
#include "classes/LinearFunc.h"
#include "classes/Sin.h"
#include "classes/Cos.h"


int main()
{
	//Linear function
	LinearFunc linear(5, 7);
	std::cout << linear.printFunc() << '\n';
	std::cout << linear.info() << '\n';
	std::cout << '\n';

	//Sinus funciton
	Sin sinus(90);
	std::cout << sinus.printFunc() << '\n';
	std::cout << sinus.info() << '\n';
	std::cout << '\n';

	//Cosinus funciton
	Sin cosinus(90);
	std::cout << cosinus.printFunc() << '\n';
	std::cout << cosinus.info() << '\n';
	std::cout << '\n';

	return 0;
}
