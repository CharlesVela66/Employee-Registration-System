#ifndef BOSS
#define BOSS
#include "Employee.h"

class Boss: public Employee{
	private:
		int salaryBonus;

	public:
		Boss();
		int getSalaryBonus();
		void setSalaryBonus(int sBonus);
		void calculateSalary() override;
		void printSalary() override;
};
#endif
