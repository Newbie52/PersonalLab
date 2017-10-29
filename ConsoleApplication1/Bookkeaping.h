#ifndef BOOKKEAPING_H
#define BOOKKEAPING_H
#include <string>
#include <iostream>
#include "IUser.h"
#include "IAccount.h"
#include <vector>
#include "Developer.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "Employee.h"
#include "Exceptions.h"

enum class JobHierarchyType
{
	Sup,
	Sub
};
class Bookkeaping
{
public:
	Bookkeaping();
	~Bookkeaping();

	std::vector<Employee*> employees;

	void addEmployee(Employee * _empl);
	void setSalaryDevelopers(int _salary);
	void setSalaryTeamleaders(int _salary);
	void setSalaryManagers(int _salary);

	void Bookkeaping::addSuperior(Employee * _empl, Employee * _superior);
	void Bookkeaping::addSubordinator(Employee * _empl, Employee * _subord);

	void printPersonal();
	void printSups(Employee * _empl);
	void printSubs(Employee * _empl);

	IAccount * getAccountByName(const std::string & _name);
	IUser * getUserByName(const std::string & _name);
private:
	bool canAdd(Employee * _to, Employee * _whom, JobHierarchyType _type);
	bool find(const std::string & _name);
	void setSalary(int _salary, const std::string & _tag);
	Employee * getEmplByName(const std::string & _name);
};

//std::ostream& operator<<(std::ostream & os, Employee & empl)
//{
//	return os << empl.to_string();
//}

#endif