#ifndef CWF_POWER_H
#define CWF_POWER_H

#include <string>

#include "Linear.hpp"

class Power : public Linear {
private:
	int degree;

public:
	std::string printFunc() const override;
	std::string info() const override;
	std::string deriv() const override;
	std::string calc(int x) const override;
	Power(int slope, int coef, int degree);

	int getSlope() const;
	int getCoef() const;
	int getDegree() const;
};

#endif // CWF_POWER_H
