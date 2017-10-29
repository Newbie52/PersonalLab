#ifndef NEGATIVESALARYEXCEPTION_H
#define NEGATIVESALARYEXCEPTION_H
#include "Exception.h"
class NegativeSalaryException : public Exception
{
public:
	NegativeSalaryException(const std::string & _message);
	NegativeSalaryException();
	~NegativeSalaryException();
};
#endif
