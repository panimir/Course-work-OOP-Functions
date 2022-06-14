#ifndef CWF_SQUARE_H
#define CWF_SQUARE_H

#include <iostream>
#include <string>

#include "Function.h"
#include "Linear.h"

class Power : public Linear {
private:
	int degree;

public:
	std::string printFunc() const override;
	std::string info() const override;
	std::string deriv() const override;
	Power(int slope, int coef, int degree);

	int getSlope() const;
	int getCoef() const;
	int getDegree() const;
};

#endif // CWF_SQUARE_H
