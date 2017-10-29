#include "Developer.h"



Developer::Developer(const std::string & _fName, const std::string & _sName, const std::string & _email) : Employee(_fName, _sName, _email)
{
	tag = "developer";
}


Developer::~Developer()
{
}

