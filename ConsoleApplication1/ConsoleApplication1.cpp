// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Developer.h"
#include "TeamLeader.h"
#include "Bookkeaping.h"
using namespace std;

int main()
{
	Developer * dev = new Developer("Andy", "Prok", "abc@mail.ru");
	Bookkeaping * bookk = new Bookkeaping();
	bookk->addEmployee(dev);
	Developer * dev2 = new Developer("Andy", "Prok", "abc@mail.ru");
	try
	{
		bookk->addEmployee(dev2);
	}
	catch (Exception & ex)
	{
		cout << "****Warning:" << ex.message << endl;
	}

	TeamLeader * tl = new TeamLeader("Pavel", "Kozhevnikov", "pkozh@mail.ru");
	bookk->addSuperior(dev, tl);
	try
	{
		bookk->addSuperior(new Manager("Kate", "Woznyak", "woz@mail.ru"), new TeamLeader("Pavel", "Kozhevnikov", "pkozh@mail.ru"));
	}
	catch (Exception & ex)
	{
		cout << "****Warning:" << ex.message << endl;
	}
	bookk->setSalaryTeamleaders(120000);

	bookk->addSubordinator(tl, new Developer("Egor", "Smirnov", "smit@you.ru"));

	cout << "Subordinators of -> " << tl->to_string() << endl;
	
	try
	{
		bookk->printSubs(tl);
	}
	catch (Exception & ex)
	{
		cout << "****Warning:" << ex.message << endl;
	}

	cout << "Superiors of -> " << tl->to_string() << endl;
	try
	{
		bookk->printSups(dev);
	}
	catch (Exception & ex)
	{
		cout << "****Warning:" << ex.message << endl;
	}

	try
	{
		IAccount * acc = bookk->getAccountByName(dev->getFullName());
		acc->setSalary(45000);
	}
	catch (Exception & ex)
	{
		cout << "****Warning:" << ex.message << endl;
	}	


	try
	{
		IUser * user = bookk->getUserByName(dev->getFullName());
		user->setEmail("yoi@jf.ru");
	}
	catch (Exception & ex)
	{
		cout << "****Warning:" << ex.message << endl;
	}
	
	bookk->printPersonal();
	getch();
	return 0;
}

