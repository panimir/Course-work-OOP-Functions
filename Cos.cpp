#include "classes/Cos.hpp"

Cos::Cos(int value)
	: Function()
	, value(value)
{
}

std::string Cos::printFunc() const
{
	return "f(x) = cos(" + std::to_string(value) + "deg)";
}

std::string Cos::info() const
{
	return "f(x) is trigonometrical function cos(x), where x = "
		+ std::to_string(value);
}

std::string Cos::deriv() const
{
	return "f(cos(" + std::to_string(value) + "deg))' = -sin("
		+ std::to_string(value) + "deg)";
}

std::string Cos::calc(int value) const
{
	return "f(cos(" + std::to_string(value) + "deg)) = "
		+ std::to_string(cos((value * M_PI) / 180));
}

int Cos::getValue() const { return value; }
