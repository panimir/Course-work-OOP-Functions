//#pragma once
#ifndef CWF_FUNCTION_H
#define CWF_FUNCTION_H

#include <string>

class Function {
public:
	virtual std::string printFunc() const = 0;
	virtual std::string info() const = 0;
	virtual std::string deriv() const = 0;
	virtual std::string calc(int) const = 0;
};

#endif // CWF_FUNCTION_H
