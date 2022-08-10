#include <iostream>
#include "CommissionWorker.h"

using namespace std;

CommissionWorker::CommissionWorker(){
	commission = 0;
	itemsSold = 0;
}

int CommissionWorker::getCommission(){
	return commission;
}

int CommissionWorker::getItemsSold(){
	return itemsSold;
}

void CommissionWorker::setCommission(int c){
	commission = c;
}

void CommissionWorker::setItemsSold(int items){
	itemsSold = items;
}

void CommissionWorker::calculateSalary(){
	finalSalary = (workDays * baseSalary) + (commission * itemsSold);
}

void CommissionWorker::printSalary(){
	cout << "Name: " << name << "\nEmployee Type: Commission Worker \nDays Worked: "<< workDays << "\nSalary: " << finalSalary << endl << endl;
	/*finalSalaryS = "Name: "+ name + "Employee Type: " + typeEmployee + "Days Worked: " + workDays + "Commission: " + commission +"Items Sold: "+ itemsSold + "Salary: " + finalSalary;
	return finalSalaryS;*/
}
