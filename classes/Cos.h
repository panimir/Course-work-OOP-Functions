#ifndef CWF_COS_H
#define CWF_COS_H

#include <cmath>
#include <iostream>
#include <string>

#include "Function.h"

class Cos : public Function {
private:
	int value;

public:
	std::string printFunc() const override;
	std::string info() const override;
	std::string calc(int value) const override;
	std::string deriv() const override;
	Cos(int value);
	int getValue() const;
	std::string operator -(int i);
};

#endif // CWF_COS_H
