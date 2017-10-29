#ifndef IACCOUNT_H
#define IACCOUNT_H
class IAccount
{
public:
	IAccount();
	virtual int getSalary() = 0;
	virtual void setSalary(int _salary) = 0;
	/*virtual void addSuperior(Employee _superior) = 0;
	virtual void addSubordinator(Employee _subord) = 0;*/
	//void printPersonal(std::vector<Employee> _empls);
	//void addEmployee(std::vector<Employee> & vecWorkers, Employee worker);
};
#endif