#ifndef NOTABLETOCONTAINSUPSEXCEPTION_H
#define NOTABLETOCONTAINSUPSEXCEPTION_H
#include "Exception.h"
#include <string>
#include "Employee.h"
class NotAbleToContainSupsException : public Exception
{
public:
	NotAbleToContainSupsException(const std::string & _message);
	NotAbleToContainSupsException(Employee * _empl);
	~NotAbleToContainSupsException();
};
#endif
