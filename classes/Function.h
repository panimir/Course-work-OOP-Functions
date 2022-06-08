#pragma once
#ifndef FUNCITONS_FUNC_H
#define FUNCTIONS_FUNC_H

#include <string>

class Function
{
public:
	virtual std::string printFunc() = 0;
	virtual std::string info() = 0;
};

#endif // FUNCTIONS_FUNC
