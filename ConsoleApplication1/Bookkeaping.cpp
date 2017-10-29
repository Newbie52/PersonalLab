#include "Bookkeaping.h"


Bookkeaping::Bookkeaping()
{
}


Bookkeaping::~Bookkeaping()
{
}

void Bookkeaping::addEmployee(Employee * _empl)
{
	if (!find(_empl->getFullName()))
	{
		employees.push_back(_empl);
	}
	else
	{
		throw PersonExistException(_empl);
	}
}

bool Bookkeaping::find(const std::string & _name)
{
	for each (Employee * empl in employees)
	{
		if (empl->getFullName() == _name)
		{
			return true;
		}
	}

	return false;
}

void Bookkeaping::setSalaryDevelopers(int _salary)
{
	setSalary(_salary, "developer");
}

void Bookkeaping::setSalaryTeamleaders(int _salary)
{
	setSalary(_salary, "teamleader");
}

void Bookkeaping::setSalaryManagers(int _salary)
{
	setSalary(_salary, "manager");
}

void Bookkeaping::setSalary(int _salary, const std::string & _tag)
{
	for each (Employee * empl in employees)
	{
		if (empl->getTag() == _tag)
		{
			IAccount * acc = empl;
			acc->setSalary(_salary);
		}
	}
}

IAccount * Bookkeaping::getAccountByName(const std::string & _name)
{
	if (find(_name))
	{
		return getEmplByName(_name);
	}

	throw NotFoundPersonException("Not found " + _name);
}
IUser * Bookkeaping::getUserByName(const std::string & _name)
{
	if (find(_name))
	{
		return getEmplByName(_name);
	}

	throw NotFoundPersonException("Not found " + _name);
}

Employee * Bookkeaping::getEmplByName(const std::string & _name)
{
	for each (Employee * empl in employees)
	{
		if (empl->getFullName() == _name)
		{
			return empl;
		}
	}

	return NULL;
}

void Bookkeaping::printPersonal()
{
	for each (Employee * empl in employees)
	{
		std::cout << empl->to_string() << std::endl;
	}

	std::cout << std::endl;
}

void Bookkeaping::printSups(Employee * _empl)
{
	if (find(_empl->getFullName()))
	{
		for each (Employee * sup in _empl->superiors)
		{
			std::cout << sup->to_string() << std::endl;
		}

		std::cout << std::endl;
		return;
	}

	std::cout << std::endl;
	throw NotFoundPersonException(_empl);
}

void Bookkeaping::printSubs(Employee * _empl)
{
	if (find(_empl->getFullName()))
	{
		for each (Employee * sub in _empl->subordinators)
		{
			std::cout << sub->to_string() << std::endl;
		}

		std::cout << std::endl;
		return;
	}

	std::cout << std::endl;
	throw NotFoundPersonException(_empl);
}

void Bookkeaping::addSuperior(Employee * _empl, Employee * _superior)
{
	Employee * empl;
	Employee * superior;
	if (canAdd(_empl, _superior, JobHierarchyType::Sup))
	{
		empl = getEmplByName(_empl->getFullName());
		superior = getEmplByName(_superior->getFullName());
		if (empl != NULL)
		{
			if (superior != NULL)
			{
				empl->superiors.push_back(superior);
				superior->subordinators.push_back(empl);
			}
			else
			{

				empl->superiors.push_back(_superior);
				_superior->subordinators.push_back(empl);
				employees.push_back(_superior);
			}
		}
		else
		{
			if (superior != NULL)
			{
				_empl->superiors.push_back(superior);
				superior->subordinators.push_back(_empl);
				employees.push_back(_empl);
			}
			else
			{
				_empl->superiors.push_back(_superior);
				_superior->subordinators.push_back(_empl);
				employees.push_back(_empl);
				employees.push_back(_superior);	
			}
		}
	}
}

void Bookkeaping::addSubordinator(Employee * _empl, Employee * _subord)
{
	Employee * empl;
	Employee * subord;
	if (canAdd(_empl, _subord, JobHierarchyType::Sub))
	{
		empl = getEmplByName(_empl->getFullName());
		subord = getEmplByName(_subord->getFullName());
		if (empl != NULL)
		{
			if (subord != NULL)
			{
				empl->subordinators.push_back(subord);
				subord->superiors.push_back(empl);
			}
			else
			{
				_subord->superiors.push_back(empl);
				empl->subordinators.push_back(_subord);
				employees.push_back(_subord);
			}
		}
		else
		{
			if (subord != NULL)
			{
				_empl->subordinators.push_back(subord);
				subord->superiors.push_back(_empl);
				employees.push_back(_empl);
			}
			else
			{
				_empl->subordinators.push_back(_subord);
				_subord->superiors.push_back(_empl);
				employees.push_back(_empl);
				employees.push_back(_subord);			
			}
		}
	}
}

bool Bookkeaping::canAdd(Employee * _to, Employee * _whom, JobHierarchyType _type)
{
	if (_type == JobHierarchyType::Sup)
	{
		if (_to->getTag() == "manager")
		{
			throw NotAbleToContainSupsException(_to);
			return false;
		}
		else if (_to->getTag() == "teamleader")
		{
			if (_whom->getTag() == "manager")
			{
				return true;
			}

			return false;
		}
		else if (_to->getTag() == "developer")
		{
			if (_whom->getTag() == "teamleader")
			{
				return true;
			}

			return false;
		}
	}
	else
	{
		if (_to->getTag() == "developer")
		{
			throw NotAbleToContainSubsException(_to);
		}
		else if (_to->getTag() == "teamleader")
		{
			if (_whom->getTag() == "developer")
			{
				return true;
			}

			throw NotAbleToBeSubException(_whom);
		}
		else if (_to->getTag() == "manager")
		{
			if (_whom->getTag() == "teamleader")
			{
				return true;
			}

			throw NotAbleToBeSubException(_whom);
		}
	}

	return false;
}
