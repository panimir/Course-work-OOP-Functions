#ifndef CWF_LINEAR_H
#define CWF_LINEAR_H

#include "Function.hpp"
#include <string>

class Linear : public Function {
protected:
	int slope;
	int coef;

public:
	std::string printFunc() const override;
	std::string info() const override;
	std::string deriv() const override;
	std::string calc(int x) const override;
	Linear(int slope, int coef);

	int getSlope() const;
	int getCoef() const;
};

#endif // CWF_LINEAR_H
