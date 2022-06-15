#include "classes/Oper.hpp"

Oper::Oper() {};

Oper::Oper(const std::string& f) { this->f = f; }

std::string Oper::getSum(
	const std::string& f1, const std::string& f2) const
{
	return "(" + f1 + ")" + "+" + "(" + f2 + ")";
}

std::string Oper::getMult(
	const std::string& f1, const std::string& f2) const
{
	return "(" + f1 + ")" + "*" + "(" + f2 + ")";
}

std::string Oper::getStr() const { return f; }

Oper Oper::operator-(const std::string& f2)
{
	return Oper("(" + f + ")" + "-" + "(" + f2 + ")");
}
