#include "classes/Sin.h"

Sin::Sin(int value)
	: Function()
	, value(value)
{
}

std::string Sin::printFunc() const
{
	return "f(x) = sin(" + std::to_string(value) + "deg)";
}

std::string Sin::info() const
{
	return "f(x) is trigonometrical function sin(x), where x = "
		+ std::to_string(value)
		+ " ( = " + Sin::calc(value)+ ")";
}

std::string Sin::deriv() const
{
	return "f(x)' = cos(" + std::to_string(value) + "deg)";
}

std::string Sin::calc(int value) const
{
	return std::to_string(sin((value * M_PI) / 180));
}

int Sin::getValue() const { return value; }
