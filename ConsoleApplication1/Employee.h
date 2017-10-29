#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "IUser.h"
#include "IAccount.h"
#include <vector>
#include <sstream>
class Employee : public IAccount, public IUser
{
protected:
	std::string firstName;
	std::string secondName;
	std::string fullName;
	std::string email;
	std::string tag;
	int salary;

public:
	Employee(const std::string & _fName, const std::string & _sName, const std::string & _email);
	~Employee();

	std::vector<Employee*> superiors;
	std::vector<Employee*> subordinators;

	virtual std::string getFullName();
	virtual std::string getEmail();
	virtual std::string getTag();
	virtual void setEmail(const std::string & _email);
	virtual int getSalary();
	virtual void setSalary(int _salary);

	std::string to_string();
};


#endif
