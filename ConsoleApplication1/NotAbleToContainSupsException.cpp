#include "NotAbleToContainSupsException.h"


NotAbleToContainSupsException::NotAbleToContainSupsException(const std::string & _message) : Exception(_message)
{

}

NotAbleToContainSupsException::NotAbleToContainSupsException(Employee * _empl)
{
	message = "Employee (" + _empl->to_string() + ") is not able to contain any superiors.";
}

NotAbleToContainSupsException::~NotAbleToContainSupsException()
{
}
