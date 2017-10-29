#include "Employee.h"

Employee::Employee(const std::string & _fName, const std::string & _sName, const std::string & _email)
{
	firstName = _fName;
	secondName = _sName;
	fullName = firstName + " " + secondName;
	email = _email;
	salary = 10000;
	tag = "employee";
}

Employee::~Employee()
{
}

std::string Employee::getFullName()
{
	return fullName;
}

std::string Employee::getEmail()
{
	return empty(email) ? "NONE" : email;
}

std::string Employee::getTag()
{
	return tag;
}

int Employee::getSalary()
{
	return salary;
}

void Employee::setSalary(int _salary)
{
	salary = _salary;
}

void Employee::setEmail(const std::string & _email)
{
	email = _email;
}

std::string Employee::to_string()
{
	std::ostringstream oss;
	oss << this->getSalary();
	std::string str_salary = oss.str();
	return this->getFullName() + " " + this->getEmail() + " " + str_salary;
}
