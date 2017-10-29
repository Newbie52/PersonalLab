#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "Employee.h"
#include <string>
#include "TeamLeader.h"
#include <iostream>

class Developer : public Employee
{
private:

public:
	Developer(const std::string & _fName, const std::string & _sName, const std::string & _email);
	~Developer();
};

#endif