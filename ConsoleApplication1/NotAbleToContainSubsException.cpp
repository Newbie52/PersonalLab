#include "NotAbleToContainSubsException.h"

NotAbleToContainSubsException::NotAbleToContainSubsException(const std::string & _message) : Exception(_message)
{

}

NotAbleToContainSubsException::NotAbleToContainSubsException(Employee * _empl)
{
	message = "Employee (" + _empl->to_string() + ") is not able to contain any subordinators.";
}

NotAbleToContainSubsException::~NotAbleToContainSubsException()
{

}