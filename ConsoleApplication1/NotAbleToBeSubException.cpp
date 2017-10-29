#include "NotAbleToBeSubException.h"



NotAbleToBeSubException::NotAbleToBeSubException(const std::string & _message) : Exception(_message)
{
	
}

NotAbleToBeSubException::NotAbleToBeSubException(Employee * _empl)
{
	message = "Employee (" + _empl->to_string() +") is not able to be subordinator.";
}


NotAbleToBeSubException::~NotAbleToBeSubException()
{
}
