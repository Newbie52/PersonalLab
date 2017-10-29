#include "Manager.h"



Manager::Manager(const std::string & _fName, const std::string & _sName, const std::string & _email) : Employee(_fName, _sName, _email)
{
	tag = "manager";
}


Manager::~Manager()
{
}

