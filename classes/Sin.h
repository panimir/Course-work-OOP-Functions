#ifndef SIN_FUNC_H
#define SIN_FUNC_H

#include <iostream>
#include <cmath>
#include <string>

#include "Function.h"

class Sin : public Function {
private:
	int value;

public:
	Sin(int v)
		: value(v)
	{
	}

	std::string printFunc() override
	{
		return "f(x) = sin(" + std::to_string(value) + "deg)";
	}

	std::string info() override
	{
		return "f(x) is trigonometrical function sin(x), where x = "
			+ std::to_string(value);
	}
};

#endif // SIN_FUNC
