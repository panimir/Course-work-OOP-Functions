#include "classes/Power.h"

Power::Power(int slope, int coef, int degree)
	: Linear(slope, coef)
	, degree(degree)
{
}

std::string Power::printFunc() const
{
	return "f(x) = " + std::to_string(slope) + "x^"
		+ std::to_string(degree) + "+" + "(" + std::to_string(coef) + ")";
}

std::string Power::info() const
{
	return "f(x) a power function of degree " + std::to_string(degree)
		+ " with slope " + std::to_string(slope) + " and coefficient -- "
		+ std::to_string(coef);
}

std::string Power::deriv() const
{
	return Power::printFunc()
		+ "\nf(x)' = " + std::to_string(getSlope() * degree) + "x^"
		+ std::to_string(degree - 1);
}

int Power::getSlope() const { return slope; }
int Power::getCoef() const { return coef; }
int Power::getDegree() const { return degree; }
