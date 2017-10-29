#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <string>
class Exception : public std::exception
{
public:
	Exception(const std::string & _message);
	Exception();
	~Exception();

	std::string message;
};

#endif
