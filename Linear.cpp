#include "classes/Linear.h"

Linear::Linear(int slope, int coef)
	: Function()
	, slope(slope)
	, coef(coef)
{
}

std::string Linear::printFunc() const
{
	return "f(x) = " + std::to_string(slope) + "x" + "+" + "("
		+ std::to_string(coef) + ")";
}

std::string Linear::info() const
{
	return "f(x) a linear function with slope " + std::to_string(slope)
		+ " and coefficient -- " + std::to_string(coef);
}

std::string Linear::deriv() const
{
	return "f(" + std::to_string(slope) + "x" + "+" + "("
		+ std::to_string(coef) + ")" + ")'"
		+ " = " + std::to_string(getSlope());
}

std::string Linear::calc(int x) const
{
	return std::to_string(slope) + std::to_string(x) + "+" + "("
		+ std::to_string(coef) + ")" + " = "
		+ std::to_string(slope * x + coef);
}

int Linear::getSlope() const { return slope; }
int Linear::getCoef() const { return coef; }
