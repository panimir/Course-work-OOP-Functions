#ifndef SIN_FUNC_H
#define SIN_FUNC_H

#include <cmath>
#include <iostream>
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
			+ std::to_string(value)
			+ " ( = " + std::to_string(sin((value * M_PI)/180)) + ")";
	}
};

#endif // SIN_FUNC
