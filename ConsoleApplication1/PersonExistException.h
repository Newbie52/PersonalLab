#ifndef PERSONEXISTEXCEPTION_H
#define PERSONEXISTEXCEPTION_H
#include "Exception.h"
#include "Employee.h"
class PersonExistException : public Exception
{
public:
	PersonExistException(const std::string & _message);
	PersonExistException(Employee * _empl);
	~PersonExistException();
};
#endif
