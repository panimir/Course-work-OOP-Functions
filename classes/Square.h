#ifndef SQUARE_FUNC_H
#define SQUARE_FUNC_H

#include <iostream>
#include <string>

#include "Function.h"

class Square : public Function {
private:
	int coef;

public:
	Square(int c)
		: coef(c)
	{
	}

	std::string printFunc() override
	{
		return "f(x) = " + std::to_string(coef) + "x^2";
	}

	std::string info() override
	{
		return "f(x) is a square function kx^2, where k = "
			+ std::to_string(coef);
	}
};

#endif // SQUARE_FUNC
