#ifndef EMPTYDATABASEEXCEPTION_H
#define EMPTYDATABASEEXCEPTION_H
#include "Exception.h"
class EmptyDatabaseException : Exception
{
public:
	EmptyDatabaseException(const std::string & _message);
	EmptyDatabaseException();
	~EmptyDatabaseException();
};
#endif
