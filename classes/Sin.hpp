#ifndef CWF_SIN_H
#define CWF_SIN_H

#include <cmath>
#include <string>

#include "Function.hpp"

class Sin : public Function {
private:
	int value;

public:
	std::string printFunc() const override;
	std::string info() const override;
	std::string deriv() const override;
	std::string calc(int value) const override;
	Sin(int value);
	int getValue() const;
};

#endif // CWF_SIN_H
