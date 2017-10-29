#include "NegativeSalaryException.h"


NegativeSalaryException::NegativeSalaryException(const std::string & _message) : Exception(_message)
{

}

NegativeSalaryException::NegativeSalaryException()
{
	message = "Trying to set negative salary, but it must be > 0";
}


NegativeSalaryException::~NegativeSalaryException()
{
}
