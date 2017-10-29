#ifndef	NOTABLETOBESUBEXCEPTION_H
#define NOTABLETOBESUBEXCEPTION_H
#include "Exception.h"
#include "Employee.h"
class NotAbleToBeSubException : public Exception
{
public:
	NotAbleToBeSubException(const std::string & _message);
	NotAbleToBeSubException(Employee * _empl);
	~NotAbleToBeSubException();
};

#endif