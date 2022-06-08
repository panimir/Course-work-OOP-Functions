#ifndef COS_FUNC_H
#define COS_FUNC_H

#include <iostream>
#include <cmath>
#include <string>

#include "Function.h"

class Cos : public Function {
private:
	int value;

public:
	Cos(int v)
		: value(v)
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

#endif // COS_FUNC
