#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(){
	name = "";
	typeEmployee = "";
	workDays = 0;
	baseSalary = 0;
	finalSalary = 0;
	finalSalaryS = "";
}

Employee::~Employee(){
}

string Employee::getName(){
	return name;
}

string Employee::getType(){
	return typeEmployee;
}

int Employee::getWorkDays(){
	return workDays;
}

int Employee::getBaseSalary(){
	return baseSalary;
}

void Employee::setName(string n){
	name = n;
}

void Employee::setType(string type){
	typeEmployee = type;
}

void Employee::setWorkDays(int num){
	workDays = num;
}

void Employee::setBaseSalary(int s){
	baseSalary = s;
}

void Employee::calculateSalary(){
	finalSalary = workDays * baseSalary;
}

int Employee::getFinalSalary(){
	return finalSalary;
}

void Employee::printSalary(){
	cout << "Name: " << name << "\nEmployee Type: Employee \nDays Worked: "<< workDays << " \nSalary: " << finalSalary <<endl << endl;
	/*finalSalaryS = "Name: " + name + "Employee Type: " + typeEmployee + "Days Worked: " + workDays + "Salary: " + finalSalary;
	return finalSalaryS;*/
}


