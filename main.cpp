#include <iostream>
#include <string>
#include <exception>

#include "classes/Linear.h"
#include "classes/Power.h"
#include "classes/Sin.h"
#include "classes/Cos.h"

int main()
{
	try {
		//Linear function
		Linear linear(5, 7);
		std::cout << linear.printFunc() << '\n';
		std::cout << linear.info() << '\n';
		std::cout << linear.deriv() << '\n';
		std::cout << linear.calc(5) << '\n';
		std::cout << '\n';

		// Power funciton
		Power power(3, 5, 7);
		std::cout << power.printFunc() << '\n';
		std::cout << power.info() << '\n';
		std::cout << power.deriv() << '\n';
		std::cout << power.calc(5) << '\n';
		std::cout << '\n';

		// Sin funciton
		Sin sin(90);
		std::cout << sin.printFunc() << '\n';
		std::cout << sin.info() << '\n';
		std::cout << sin.deriv() << '\n';
		std::cout << '\n';

		// Cos funciton
		Cos cos(90);
		std::cout << cos.printFunc() << '\n';
		std::cout << cos.info() << '\n';
		std::cout << cos.deriv() << '\n';
		std::cout << '\n';
	} catch (const std::exception& ex)
	{
		std::cerr << ex.what();
	}

	return 0;
}
