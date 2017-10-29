#pragma once
#include "Employee.h"
#include <string>
#include <iostream>
#include "IAccount.h"
#include "TeamLeader.h"

class Manager : public Employee
{
public:
	Manager(const std::string & _fName, const std::string & _sName, const std::string & _email);
	~Manager();
};

