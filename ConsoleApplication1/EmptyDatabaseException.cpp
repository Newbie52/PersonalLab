#include "EmptyDatabaseException.h"

EmptyDatabaseException::EmptyDatabaseException(const std::string & _message) : Exception(_message)
{

}


EmptyDatabaseException::EmptyDatabaseException()
{
	message = "Database is empty and does not contains any employee.";
}


EmptyDatabaseException::~EmptyDatabaseException()
{
}
