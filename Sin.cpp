#include "classes/Sin.hpp"

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
		+ std::to_string(value);
}

std::string Sin::deriv() const
{
	return "f(sin(" + std::to_string(value) + "deg))' = cos("
		+ std::to_string(value) + "deg)";
}

std::string Sin::calc(int value) const
{
	return "f(sin(" + std::to_string(value) + "deg)) = "
		+ std::to_string(sin((value * M_PI) / 180));
}

int Sin::getValue() const { return value; }
