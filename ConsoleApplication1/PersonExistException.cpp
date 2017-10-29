#include "PersonExistException.h"

PersonExistException::PersonExistException(const std::string & _message) : Exception(_message)
{

}

PersonExistException::PersonExistException(Employee * _empl)
{
	message = "Employee (" + _empl->to_string() + ") is already exist.";
}

PersonExistException::~PersonExistException()
{
}
