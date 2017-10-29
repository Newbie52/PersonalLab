#include "NotFoundPersonException.h"

NotFoundPersonException::NotFoundPersonException(const std::string & _message) : Exception(_message)
{

}

NotFoundPersonException::NotFoundPersonException(Employee * _empl)
{
	message = "Employee (" + _empl->to_string() + ") is not exist in database.";
}

NotFoundPersonException::~NotFoundPersonException()
{
}
