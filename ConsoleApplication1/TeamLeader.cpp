#include "TeamLeader.h"



TeamLeader::TeamLeader(const std::string & _fName, const std::string & _sName, const std::string & _email) : Employee(_fName, _sName, _email)
{
	tag = "teamleader";
}


TeamLeader::~TeamLeader()
{
}