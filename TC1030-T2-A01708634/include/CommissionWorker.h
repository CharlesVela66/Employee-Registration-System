#ifndef COMMISSIONWORKER
#define COMMISSIONWORKER
#include "Employee.h"

class CommissionWorker: public Employee{
	private:
		int commission, itemsSold;

	public:
		CommissionWorker();
		int getCommission();
		int getItemsSold();
		void setCommission(int c);
		void setItemsSold(int items);
		void calculateSalary() override;
		void printSalary() override;
};
#endif
