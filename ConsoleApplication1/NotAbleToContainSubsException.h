#ifndef NOTABLETOCONTAINSUBSEXCEPTION_H
#define NOTABLETOCONTAINSUBSEXCEPTION_H
#include "Exception.h"
#include <string>
#include "Employee.h"
class NotAbleToContainSubsException : public Exception
{
public:
	NotAbleToContainSubsException(const std::string & _message);
	NotAbleToContainSubsException(Employee * _empl);
	~NotAbleToContainSubsException();
};
#endif
