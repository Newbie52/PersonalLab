#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "Employee.h"
#include "Manager.h"
#include "Developer.h"
#include <string>
#include <iostream>

class TeamLeader : public Employee
{
public:
	TeamLeader(const std::string & _fName, const std::string & _sName, const std::string & _email);
	~TeamLeader();
};

#endif