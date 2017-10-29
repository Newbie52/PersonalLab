#ifndef NOTFOUNDPERSONEXCEPTION_H
#define NOTFOUNDPERSONEXCEPTION_H
#include "Exception.h"
#include "Employee.h"
class NotFoundPersonException : public Exception
{
public:
	NotFoundPersonException(const std::string & _message);
	NotFoundPersonException(Employee * _empl);
	~NotFoundPersonException();
};

#endif