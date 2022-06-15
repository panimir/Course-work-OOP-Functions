#ifndef CWF_OPER_H
#define CWF_OPER_H

#include <string>

class Oper {
private:
	std::string f;
public:
	Oper();
	Oper(const std::string &f);
	std::string getSum(const std::string &f1, const std::string &f2) const;
	std::string getMult(const std::string &f1, const std::string &f2) const;
	std::string getStr() const;
	Oper operator-(const std::string& f2);
};

#endif // CWF_OPER_H
