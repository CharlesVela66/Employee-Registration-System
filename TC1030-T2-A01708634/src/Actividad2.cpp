
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Boss.h"
#include "CommissionWorker.h"

using namespace std;

int main() {
	vector<Employee*> vec;
	int totalPayment = 0;
	int numOfEmployees = 0;

	cout << "Give me the total number of employees: ";
	cin >> numOfEmployees;

	for (int ind = 0; ind < numOfEmployees; ind++){
		string s = "";
		int i = 0;
		cout << "What is your employee type (Don't use spaces)?: ";
		cin >> s;
		if (s == "Boss"){
			Boss b;
			b.setType(s);
			cout << "What is your name?: ";
			cin >> s;
			b.setName(s);
			cout << "What is your base salary?: ";
			cin >> i;
			b.setBaseSalary(i);
			cout << "How many days did you work?: ";
			cin >> i;
			b.setWorkDays(i);
			cout << "What is your salary bonus?: ";
			cin >> i;
			cout << "\n";
			b.setSalaryBonus(i);
			b.calculateSalary();
			//b.printSalary();

			totalPayment += b.getFinalSalary();

			vec.push_back(new Boss(b));
			// cout << "THIS WORKS??? BASE SALARY OF THIS ONE IS: " << b.getBaseSalary() <<endl;
			// cout << "THIS WORKS??? FINAL SALARY OF THIS ONE IS: " << b.getFinalSalary() <<endl;
		}
		else if (s == "CommissionWorker" || s == "Commissionworker"){
			CommissionWorker cm;
			cm.setType(s);
			cout << "What is your name?: ";
			cin >> s;
			cm.setName(s);
			cout << "What is your base salary?: ";
			cin >> i;
			cm.setBaseSalary(i);
			cout << "How many days did you work?: ";
			cin >> i;
			cm.setWorkDays(i);
			cout << "How many items did you sell?: ";
			cin >> i;
			cm.setItemsSold(i);
			cout << "What is your commission?: ";
			cin >> i;
			cout << "\n";
			cm.setCommission(i);
			cm.calculateSalary();
			//cm.printSalary();
			totalPayment += cm.getFinalSalary();

			vec.push_back(new CommissionWorker(cm));
			// cout << "THIS WORKS??? BASE SALARY OF THIS ONE IS: " << cm.getBaseSalary() << endl;
			// cout << "THIS WORKS??? BASE SALARY OF THIS ONE IS: " << cm.getFinalSalary() <<endl;

		}
		else if (s == "Employee"){
			Employee e;
			e.setType(s);
			cout << "What is your name?: ";
			cin >> s;
			e.setName(s);
			cout << "What is your base salary?: ";
			cin >> i;
			e.setBaseSalary(i);
			cout << "How many days did you work?: ";
			cin >> i;
			cout << "\n";
			e.setWorkDays(i);
			e.calculateSalary();
			//e.printSalary();
			totalPayment += e.getFinalSalary();

			vec.push_back(new Employee(e));
			//cout << "THIS WORKS??? BASE SALARY OF THIS ONE IS: " << e.getFinalSalary() <<endl;
		}
		else {
			cout << "Your employee type doesn't appear on the registration. Try again." << endl << endl;
			ind--;
		}

		//cout << "The total payment right now is of: " << totalPayment << endl << endl;
	}
	vector <Employee*>::iterator iter, end;
	for (iter = vec.begin(), end = vec.end(); iter != end; ++iter){
		(*iter) -> printSalary();
	}
	cout << "The total payment is equal to: " << totalPayment << endl;
	return 0;
}

