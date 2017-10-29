#ifndef IUSER_H
#define IUSER_H
#include <string>
class IUser
{
public:
	IUser();
	virtual std::string getFullName() = 0;
	virtual std::string getEmail() = 0;
	virtual void setEmail(const std::string & _email) = 0;
};

#endif