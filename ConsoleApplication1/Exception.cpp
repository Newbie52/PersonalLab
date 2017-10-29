#include "Exception.h"



Exception::Exception(const std::string & _message)
{
	message = _message;
}

Exception::Exception()
{
	message = "default exception";
}

Exception::~Exception()
{
}

