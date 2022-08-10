#include <iostream>
#ifndef EMPLOYEE
#define EMPLOYEE
using namespace std;

class Employee{
	protected:
		string name, typeEmployee;
		int workDays, baseSalary;
		int finalSalary;
		string finalSalaryS;

	public:
		Employee();
		~Employee();
		string getName();
		string getType();
		int getWorkDays();
		int getBaseSalary();
		void setName(string n);
		void setType(string t);
		void setWorkDays(int wD);
		void setBaseSalary(int s);
		virtual void calculateSalary();
		int getFinalSalary();
		virtual void printSalary();

};
#endif
