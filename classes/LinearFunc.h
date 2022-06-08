#include "Function.h"
#include <iostream>
#include <string>

class LinearFunc : public my_Function
{
private:
	int slope, coef;

public:
	LinearFunc(int cslope, int ccoef)
	{
		slope = cslope;
		coef = ccoef;
	}
	std::string printFunc() override
	{
		std::string s = "f(x) = " + std::to_string(slope) + "*x" +
			 + "+" + "(" + std::to_string(coef) + ")";
		return s;
	}
	std::string info() override
	{
		return "It's a linear function with slope " +
			std::to_string(slope) + " and coefficient -- " +
			std::to_string(coef);
	}
};
