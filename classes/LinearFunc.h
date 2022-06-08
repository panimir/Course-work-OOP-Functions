#ifndef LINEARFUNC_FUNC_H
#define LINEARFUNC_FUNC_H

#include <iostream>
#include <string>

#include "Function.h"

class LinearFunc : public Function {
private:
	int slope, coef;

public:
	LinearFunc(int s, int c)
		: slope(s)
		, coef(c)
	{
	}
	std::string printFunc() override
	{
		return "f(x) = " + std::to_string(slope) + "*x" + "+" + "("
			+ std::to_string(coef) + ")";
	}
	std::string info() override
	{
		return "f(x) a linear function with slope " + std::to_string(slope)
			+ " and coefficient -- " + std::to_string(coef);
	}
};

#endif // LINEARFUNC_FUNC
