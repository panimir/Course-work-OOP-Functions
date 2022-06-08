#ifndef SQUARE_FUNC_H
#define SQUARE_FUNC_H

#include <iostream>
#include <string>

#include "Function.h"
//#include "LinearFunc.h"

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
		return "f(x) = cos(" + std::to_string(value) + "deg)";
	}

	std::string info() override
	{
		return "f(x) is trigonometrical function cos(x), where x = "
			+ std::to_string(value);
	}
};

#endif // SQUARE_FUNC
