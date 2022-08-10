#include "Boss.h"
#include <iostream>

using namespace std;

Boss::Boss(){
	salaryBonus = 0;
}

int Boss::getSalaryBonus(){
	return salaryBonus;
}

void Boss::setSalaryBonus(int sBonus){
	salaryBonus = sBonus;
}

void Boss::calculateSalary(){
	finalSalary = (workDays * baseSalary) + salaryBonus;
}


void Boss::printSalary(){
	cout << "Name: " << name << "\nEmployee Type: Boss \nDays Worked: "<< workDays << "\nSalary: " << finalSalary << endl <<endl;
	/*finalSalaryS = "Name: "+ name + "Employee Type: " + typeEmployee + "Days Worked: " + workDays + "Bonus:" + salaryBonus + "Salary: " + finalSalary;
	return finalSalaryS;*/
}
